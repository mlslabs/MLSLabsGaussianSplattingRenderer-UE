# MLSLabsRenderer-Pro

<a href="./LICENSE">
        <img alt="License" src="https://img.shields.io/badge/License-Apache_2.0-blue.svg"></a>

English | [中文](./README_CN.md)

[
<img src="../Media/image/mlslabs.png" width="583" title="MaLanShan Audio & Video Laboratory" />
](https://github.com/mlslabs)


# Introduction

[**MLSLabsRenderer-Pro**](https://mls4dlive.cn/) is a high-performance Unreal Engine 5 (UE5) plugin developed by [**MaLanShan Audio & Video Laboratory**](https://www.mlslabs.com.cn/). It is designed for real-time visualization, management, and scalable hybrid rendering of 3D Gaussian Splatting (3DGS) and dynamic Volumetric Video (4DGS).

Unlike traditional Niagara-based solutions, this plugin uses a custom rendering pipeline. It keeps a high frame rate while processing millions of Gaussians, and avoids the usual performance bottlenecks.

Available features:

- **High-Performance Static 3DGS**: Supports 7 million+ Gaussians at 50+ FPS (tested on an NVIDIA RTX 4070 Ti).
- **Dynamic 4DGS Playback**: Real-time volumetric video sequence playback, supporting 100,000+ Gaussians at 100+ FPS (tested on an NVIDIA RTX 4070 Ti).
- **Sequencer Integration**: Full support for UE Sequencer, with keyframe control over volumetric video playback.
- **High-Compression Static 3DGS**: Supports the `.sog` format for high-compression 3DGS.
- **Android Support**: Renders Gaussians on Android devices, with 250,000+ Gaussians at 60+ FPS (tested on a REDMI K80).
- **VR Headset Support**: Runs directly on a VR headset, with 250,000+ Gaussians at 30+ FPS (tested on a Pico 4 Ultra Enterprise). PC streaming playback is also supported.

---
# Getting Started

## Video Tutorial

Youtube (English):  
[How to Use MLSLabsRenderer (Gaussian Splatting) Plugin in UE5(Updated)](https://youtu.be/4ArswzhQ0VU)

Bilibili (Chinese):  
[MLSLabsRenderer（高斯泼溅）插件操作教程](https://www.bilibili.com/video/BV1dgcizLEAx/?vd_source=2c7de8ebd046c0fc280b916fd7f72364)


## System Requirements

- **Operating System**: Windows 10 or 11 (64-bit)
- **Unreal Engine**: 5.6.x
- **Graphics API**: DirectX 12 or Vulkan.
- **GPU**: One of the following series, or a newer model, with DirectX 12 (Feature Level 12_2) support:
  - **NVIDIA**: GeForce RTX 20 series or newer.
  - **AMD**: Radeon RX 6000 series or newer.
  - **Mobile (Android)**: Mali-G68/G71/G72/G76/G77/G78/G7xx series, or Adreno 5xx/6xx/7xx series.
- **Minimum Hardware**: NVIDIA GeForce RTX 2060 / AMD Radeon RX 6600, or an equivalent GPU.
- **Recommended Hardware**: NVIDIA GeForce RTX 4070 Ti, or an equivalent GPU.


## Plugin Download

  1. Open the GitHub Releases page.

  <img src="../Media/image/github_latest_release_2.0.jpg" width="500" />

  2. Select the plugin version that matches your engine version.
  
  <img src="../Media/image/github_release_2.0.jpg" width="500" />
  
  3. Download the zip archive.

  <img src="../Media/image/download_link_cloud_disk.jpg" width="500" />

  4. Installation:
  To package a project, unzip the downloaded plugin into the `Plugins\Marketplace` folder under the engine installation directory.

  <img src="../Media/image/unzip_2.0.jpg" width="500" />
  
  If the Marketplace directory does not exist, create it.
  
  <img src="../Media/image/marketplace.jpg" width="500" />
  
  Alternatively, unzip it directly into the `Plugins\` folder at the root of your project.
  
  <font color="red">To package the project successfully, unzip the `MLSLabsRenderer` folder into the UE5.6 engine installation directory.</font>
  
  <img src="../Media/image/after_unzip.jpg" width="500" />
  
  5. Open Unreal Editor, enable the MLSLabsRenderer plugin, and restart the editor.

  <img src="../Media/image/enable_plugin.jpg" width="500" />
  

 ## Demo Data Download Links:

Download .ply files from [Ply TestData Dir](../TestData/ply/data_download_link.md), and .ply sequence files from [Ply Sequence TestData Dir](../TestData/ply_sequence/data_download_link.md). Import them into Unreal Engine (UE) with this plugin for real-time rendering.


## Use It in an Unreal Project

1. Create or open an Unreal Engine 5.6 project. Enable **MLSLabsRenderer** in **Edit → Plugins**, then restart the editor.

## Import a Static Gaussian Splatting Model

Open Unreal Editor, create a Demo project, and create a Level.

1. Click **Import single 3D Gaussian Splatting file** on the navigation bar.

<img src="../Media/image/import_single_ply.jpg" width="500" />

2. Select your .ply file.

<img src="../Media/image/select_single_ply.jpg" width="500" />

3. After import, drag the generated Blueprint (BP) asset into the viewport.

<img src="../Media/image/single_ply_drag_to_level.jpg" width="500" />

4. The scene starts rendering. Use the Move, Rotate, and Scale tools to adjust its transform. Note: **Splat Data Path** uses a relative path.

<img src="../Media/image/render_single_ply.jpg" width="500" />


## Import an Animated Gaussian Splatting Model (4DGS / Volumetric Video)

1. Click **Import multiple 3D Gaussian Splatting files** on the navigation bar.

<img src="../Media/image/import_multiple_plys.jpg" width="500" />

2. Select multiple .ply files. You do not need to select every file. Selecting two or more files loads the whole sequence in that directory.

<img src="../Media/image/select_multiple_plys.jpg" width="500" />

3. Drag the generated animation Blueprint (BP) asset into the viewport.

<img src="../Media/image/multiple_ply_drag_to_level.jpg" width="500" />

4. The first frame of the animation is displayed. **Frame Count** is the total number of loaded frames.

Use the Move, Rotate, and Scale tools to adjust its transform. Note: **Splat Data Path** uses a relative path.

<img src="../Media/image/render_multiple_ply.jpg" width="500" />

5. With the Gaussian Splatting Actor selected, press **F** to focus on it.

<img src="../Media/image/focus.jpg" width="500" />

6. Enable playback. In the Outliner, click to edit the `BP_Animatable_Gaussian_Splatting_WanJiangDance` Blueprint.

<img src="../Media/image/EditAnimatableGaussianBP.jpg" width="500" />

In the Event Graph, right-click and type `mlslabs`. Scroll up and find the **Play** function.

<img src="../Media/image/SearchPlayApi.jpg" width="500" />

Connect the **Event BeginPlay** node to the **Play** node.

<img src="../Media/image/ConnectPlayApi.jpg" width="500" />

Click **Play** on the top navigation bar.

<img src="../Media/image/enter_run_mode.jpg" width="500" />

The volumetric video (4DGS) starts playing.

<img src="../Media/image/play_volume_video.jpg" width="500" />

## Control Keyframes with UE Sequencer

1. Create a Level Sequence.

<img src="../Media/image/new_sequence.jpg" width="500" />

2. Add the selected animated Gaussian Splatting Actor to Sequencer.

<img src="../Media/image/add_animation_actor_to_seq.jpg" width="500" />

3. Add AnimSplattingComponent to the track.

<img src="../Media/image/add_AnimSplattingComponent.jpg" width="500" />

4. Add Frame Index to the track.

<img src="../Media/image/add_FrameIndex.jpg" width="500" />

5. Add keyframes on the **Frame Index** track to control playback.

<img src="../Media/image/add_key_frame.jpg" width="500" />

## Package for Windows

The plugin is currently provided as a Shipping build, so set **Build Configuration** to **Shipping**.
Packaging requirements: Visual Studio 2022, MSVC v143 x64.

<img src="../Media/image/package.jpg" width="500" />

## Package a Pico VR APK

To package the project as an Android APK and install it on a Pico headset, see [Package a Pico VR APK](./Android_Package.md).
