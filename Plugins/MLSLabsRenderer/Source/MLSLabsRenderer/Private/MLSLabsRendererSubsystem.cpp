// Copyright 2026 MaLanShan Audio & Video Laboratory. All Rights Reserved.

#include "MLSLabsRendererSubsystem.h"
#include "MLSLabsRendererModule.h"
#include "MLSLabsRenderer.h"
#include "RenderGraphUtils.h"
#include "SceneManagement.h"
#include "Engine/Engine.h"
#include "Misc/ConfigCacheIni.h"
#include "SceneTextures.h"
#include "RenderGraphUtils.h"
#include "RenderGraphResources.h"
#include "SceneRendering.h"
#include "SceneView.h"
#include "PostProcess/PostProcessMaterialInputs.h"
#include "GaussianSplatingRendererLibrary.h"
#include "Misc/CoreDelegates.h"
#if WITH_EDITOR
#include "Editor.h"
#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "Camera/CameraActor.h"
#include "Camera/PlayerCameraManager.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpectatorPawn.h"
#include "GameFramework/DefaultPawn.h"
#endif

#define LOCTEXT_NAMESPACE "MLSLabsRendererSubsystem"

FMLSLabsRenderDelegates::FOnPreGaussianSplatting FMLSLabsRenderDelegates::OnPreGaussianSplatting;
FMLSLabsRenderDelegates::FOnPostGaussianSplatting FMLSLabsRenderDelegates::OnPostGaussianSplatting;
FMLSLabsRenderDelegates::FOnCUDABuffersUpdated FMLSLabsRenderDelegates::OnCUDABuffersUpdated;


FMLSLabsViewExtension::FMLSLabsViewExtension(const FAutoRegister& AutoRegister)
	: FSceneViewExtensionBase(AutoRegister)
{
	UE_LOG(LogTemp, Log, TEXT("MLSLabsViewExtension created"));
}

bool FMLSLabsViewExtension::IsActiveThisFrame_Internal(const FSceneViewExtensionContext& Context) const
{
	return true;
}

void FMLSLabsViewExtension::SubscribeToPostProcessingPass(EPostProcessingPass PassId, const FSceneView& InView, FAfterPassCallbackDelegateArray& InOutPassCallbacks, bool bIsPassEnabled)
{
}

void FMLSLabsViewExtension::PostRenderViewFamily_RenderThread(FRDGBuilder& GraphBuilder, FSceneViewFamily& InViewFamily)
{
	const EViewModeIndex Mode = InViewFamily.ViewMode;
	if (Mode != VMI_Lit && Mode != VMI_Unlit && Mode != VMI_Unknown)
	{
		return;
	}

	for (int32 ViewIndex = 0; ViewIndex < InViewFamily.Views.Num(); ViewIndex++)
	{
		FSceneView* View = (FSceneView*)InViewFamily.Views[ViewIndex];
		if (!View || !View->bIsViewInfo)
			continue;

		FViewInfo& ViewInfo = static_cast<FViewInfo&>(*View);

		FMLSLabsRenderDelegates::OnPreGaussianSplatting.Broadcast(GraphBuilder.RHICmdList);

		FRDGTextureRef ViewFamilyTexture = TryCreateViewFamilyTexture(GraphBuilder, InViewFamily);
		FSceneTextures* SceneTextures = (FSceneTextures*)(&ViewInfo.GetSceneTextures());
		FRDGTextureRef ViewFamilyDepthTexture = (SceneTextures->Depth.Resolve) ? SceneTextures->Depth.Resolve : SceneTextures->Depth.Target; 
		
		const bool bIsPreviewView = (Mode == VMI_Unknown);
		ExecuteGaussianSplatting_RenderThread(GraphBuilder, ViewInfo, &ViewFamilyTexture, &ViewFamilyDepthTexture, bIsPreviewView);
	}
}

void FMLSLabsViewExtension::GetSceneTexturesForView(FRDGBuilder& GraphBuilder, const FViewInfo& ViewInfo, FRDGTextureRef*& SceneColorRHI, FRDGTextureRef*& SceneDepthRHI)
{
	SceneColorRHI = nullptr;
	SceneDepthRHI = nullptr;

	FSceneTextures* SceneTextures = (FSceneTextures*)(&ViewInfo.GetSceneTextures());
	if (SceneTextures)
	{
		if (SceneTextures->Color.Target)
		{
			*SceneColorRHI = SceneTextures->Color.Target;
		}
		if (SceneTextures->Depth.Resolve)
		{
			*SceneDepthRHI = SceneTextures->Depth.Resolve;
		}
		else if (SceneTextures->Depth.Target)
		{
			*SceneDepthRHI = SceneTextures->Depth.Target;
		}
		if (SceneColorRHI && SceneDepthRHI)
		{
			return;
		}
	}
}

void FMLSLabsViewExtension::SetMLSLabsRenderer(FMLSLabsRenderer* InRenderer)
{
	GMLSLabsRenderer = InRenderer;
}

void FMLSLabsViewExtension::ExecuteGaussianSplatting_RenderThread(FRDGBuilder& GraphBuilder, FSceneView& InView, FRDGTextureRef* SceneColorRHI, FRDGTextureRef* SceneDepthRHI, bool bIsPreviewView)
{
	SCOPED_NAMED_EVENT_TEXT("MLSLabsGaussianSplatting", FColor::Emerald);

	if (!GMLSLabsRenderer->IsInitialized() || !GMLSLabsRenderer->IsEnable())
		return;

	FViewInfo& ViewInfo = static_cast<FViewInfo&>(InView);
	GMLSLabsRenderer->Render(GraphBuilder, ViewInfo, SceneColorRHI, SceneDepthRHI, bIsPreviewView);

	FMLSLabsRenderDelegates::OnPostGaussianSplatting.Broadcast(GraphBuilder.RHICmdList, ViewInfo);
}

void UMLSLabsRendererSubsystem::InitializeRenderer()
{
	GMLSLabsRenderer = MakeUnique<FMLSLabsRenderer>();
	ENQUEUE_RENDER_COMMAND(MLSLabsInitializeRenderer)(
		[this](FRHICommandListImmediate& RHICmdList)
		{
			GMLSLabsRenderer->Initialize();
		});

	FlushRenderingCommands();

	
}

void UMLSLabsRendererSubsystem::CleanupRenderer()
{	
	ENQUEUE_RENDER_COMMAND(MLSLabsCleanupRenderer)(
		[this](FRHICommandListImmediate& RHICmdList)
		{
			GMLSLabsRenderer->Release();
		});

	FlushRenderingCommands();
}

UMLSLabsRendererSubsystem::UMLSLabsRendererSubsystem()
{
}

void UMLSLabsRendererSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UWorld* World = GetWorld();

	if (IsValid(World))
	{
		InitializeRenderer();
		MLSLabsRendererViewExtension = FSceneViewExtensions::NewExtension<FMLSLabsViewExtension>();
		MLSLabsRendererViewExtension->SetMLSLabsRenderer(GMLSLabsRenderer.Get());

#if WITH_EDITOR
		if (GIsEditor && World && World->WorldType == EWorldType::Editor)
		{
			if (GEditor)
			{
				if (!PIEStartHandle.IsValid())
				{
					PIEStartHandle = FEditorDelegates::PreBeginPIE.AddUObject(this, &UMLSLabsRendererSubsystem::OnPIEStarted);
					PIEEndHandle = FEditorDelegates::EndPIE.AddUObject(this, &UMLSLabsRendererSubsystem::OnPIEStopped);
				}

				if (GEditor->IsPlaySessionInProgress())
				{
					OnPIEStarted(GEditor->bIsSimulatingInEditor);
				}
			}
		}
#endif
	}
}

void UMLSLabsRendererSubsystem::Deinitialize()
{
#if WITH_EDITOR
	if (PIEStartHandle.IsValid())
	{
		FEditorDelegates::PreBeginPIE.Remove(PIEStartHandle);
	}
	if (PIEEndHandle.IsValid())
	{
		FEditorDelegates::EndPIE.Remove(PIEEndHandle);
	}
	if (PIEBeginFrameHandle.IsValid())
	{
		FCoreDelegates::OnBeginFrame.Remove(PIEBeginFrameHandle);
		PIEBeginFrameHandle.Reset();
	}
#endif

	MLSLabsRendererViewExtension.Reset();
	FCoreDelegates::OnBeginFrame.RemoveAll(GMLSLabsRenderer.Get());
	CleanupRenderer();
	Super::Deinitialize();
}

FMLSLabsRenderer* UMLSLabsRendererSubsystem::GetRenderer()
{
	return GMLSLabsRenderer.Get();
}

void UMLSLabsRendererSubsystem::SetForceFreeCameraMode(bool bFreeCamera)
{
	bForceFreeCameraMode = bFreeCamera;
}

void UMLSLabsRendererSubsystem::OnPIEStarted(bool bIsSimulating)
{
	if (GetWorld() && GetWorld()->WorldType == EWorldType::Editor)
	{
		GMLSLabsRenderer->SetEnable(false);
		if (!PIEBeginFrameHandle.IsValid())
		{
			PIEBeginFrameHandle = FCoreDelegates::OnBeginFrame.AddUObject(this, &UMLSLabsRendererSubsystem::OnBeginFrameForPIE);
		}
	}
}

void UMLSLabsRendererSubsystem::OnPIEStopped(bool bIsSimulating)
{
	if (GetWorld() && GetWorld()->WorldType == EWorldType::Editor)
	{
		if (PIEBeginFrameHandle.IsValid())
		{
			FCoreDelegates::OnBeginFrame.Remove(PIEBeginFrameHandle);
			PIEBeginFrameHandle.Reset();
		}
		GMLSLabsRenderer->SetEnable(true);
	}
}

void UMLSLabsRendererSubsystem::OnBeginFrameForPIE()
{
#if WITH_EDITOR
	if (!GEditor || !GEditor->IsPlaySessionInProgress() || !GetWorld() || GetWorld()->WorldType != EWorldType::Editor)
	{
		return;
	}
	UWorld* PlayWorld = GEngine ? GEngine->GetCurrentPlayWorld() : nullptr;
	if (!PlayWorld && GEditor)
	{
		FWorldContext* PIEContext = GEditor->GetPIEWorldContext(0);
		if (PIEContext && PIEContext->World())
		{
			PlayWorld = PIEContext->World();
		}
	}
	if (!PlayWorld)
	{
		return;
	}
	UMLSLabsRendererSubsystem* GameSubsystem = PlayWorld->GetSubsystem<UMLSLabsRendererSubsystem>();
	if (!GameSubsystem || !GameSubsystem->GetRenderer())
	{
		return;
	}
	bool bIsFreeCamera = false;
	if (GEditor && GEditor->bIsSimulatingInEditor)
	{
		bIsFreeCamera = true;
	}
	else if (PlayWorld->GetGameInstance())
	{
		if (APlayerController* PC = PlayWorld->GetGameInstance()->GetFirstLocalPlayerController(PlayWorld))
		{
			APawn* Pawn = PC->GetPawn();
			AActor* ViewTarget = PC->GetViewTarget();
			bool bPossessSpectator = (Pawn && Pawn->IsA(ASpectatorPawn::StaticClass()));
			bool bNoPawn = !Pawn;
			bool bViewTargetNotPawn = (ViewTarget != Pawn && ViewTarget != PC);
			bool bViewTargetCameraOrFlying = (ViewTarget && (ViewTarget->IsA(ACameraActor::StaticClass()) || ViewTarget->IsA(ADefaultPawn::StaticClass())));
			bool bCameraDetachedFromPawn = false;
			if (Pawn && PC->PlayerCameraManager)
			{
				FVector CamLoc = PC->PlayerCameraManager->GetLastFrameCameraCacheView().Location;
				FVector PawnLoc = Pawn->GetActorLocation();
				const float DetachThreshold = 200.f;
				if (FVector::DistSquared(CamLoc, PawnLoc) > DetachThreshold * DetachThreshold)
				{
					bCameraDetachedFromPawn = true;
				}
			}
			bIsFreeCamera = bPossessSpectator || bNoPawn || bViewTargetNotPawn || bViewTargetCameraOrFlying || bCameraDetachedFromPawn;
		}
	}
	if (GameSubsystem->GetForceFreeCameraMode())
	{
		bIsFreeCamera = true;
	}
	if (bIsFreeCamera)
	{
		GMLSLabsRenderer->SetEnable(true);
		GameSubsystem->GetRenderer()->SetEnable(false);
	}
	else
	{
		GMLSLabsRenderer->SetEnable(false);
		GameSubsystem->GetRenderer()->SetEnable(true);
	}
#endif
}

#undef LOCTEXT_NAMESPACE

