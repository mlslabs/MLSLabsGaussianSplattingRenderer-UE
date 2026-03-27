Lite_V1.0.0.10_beta
1. Fixed an issue where colors appeared abnormal on Scaled Gaussian Splatting nodes.
2. Resolved the "access denied" error when deleting libraries (e.g., cublas64_12.dll) during the packaging process.
3. Fixed incorrect rotation of Gaussian characters when Pitch, Yaw, and Roll operations occur simultaneously.
4. Added support for rendering on non-primary GPUs (ID > 0) for multi-card systems.
5. Copy imported PLY data and use relative paths for references to ensure seamless packaging and distribution.
6. Update and calculate the bounding box after loading Gaussian data to ensure the coordinate gizmo displays correctly in the Editor.

Pro_V1.0.1.10_beta
1. Performance Boost: 120 FPS+ for 4DGS and 60 FPS+ for 7M+ Gaussians static scenes.
2. VR & Binocular Rendering: Native support for high-fidelity VR content.
3. Fixed an issue where colors appeared abnormal on Scaled Gaussian Splatting nodes.
4. Resolved the "access denied" error when deleting libraries (e.g., cublas64_12.dll) during the packaging process.
5. Added logo watermarking; note that paid removal of watermarks is not yet supported.
6. Fixed incorrect rotation of Gaussian characters when Pitch, Yaw, and Roll operations occur simultaneously.
7. Added support for rendering on non-primary GPUs (ID > 0) for multi-card systems.

Lite_V1.0.0.9_beta
1.Fixed blending artifacts caused by depth buffer resolution mismatch between Editor and Play modes.
2.Supports outputting logs to the Unreal Engine log file.

Lite_V1.0.0.8_beta
1.Support PLY files with sh_degree=0.
2.Fix significant frame rate drop and memory exhaustion when entering preview mode for newly added cameras.

Lite_V1.0.0.7_beta
1，Decouple the LibTorch library and prompt users to download it manually upon the first time using the plugin.
2,support ue 5.5,5.6,5.7.

Lite_V1.0.0.6_beta
1. fixed Repeatedly dragging to update the Gaussian Actor's transform causes the engine to crash. 

Lite_V1.0.0.5_beta

1.Standard PLY Support (Static): Supports importing standard .ply format static Gaussian Splatting scenes with high-efficiency rendering.

2.Volumetric Video (4DGS): Supports importing standard .ply sequence frames for volumetric video (4DGS) with high-efficiency rendering.

3.Quick Focus: Press the F key to quickly focus on and frame the Gaussian Actor in the viewport.

4.Sequencer Integration: Volumetric Video Actors support keyframe animation and timeline control within the Unreal Engine Sequencer.

5.DirectX 12: Full support for DX12 (DirectX 12) for modern rendering performance.

6.Shipping Support: Supports application packaging and distribution for Shipping builds.