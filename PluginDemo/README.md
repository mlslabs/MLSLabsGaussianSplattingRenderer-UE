# MLSLabsRenderer-Lite

<a href="./LICENSE">
        <img alt="License" src="https://img.shields.io/badge/License-Apache_2.0-blue.svg"></a>

English | [中文](./README_CN.md)

[
<img src="Media/image/mlslabs.png" width="583" title="MaLanShan Audio & Video Laboratory" />
](https://github.com/mlslabs)


# Introduction

**MLSLabsRenderer-Lite** is a high-performance Unreal Engine 5 (UE5) plugin developed by [**MaLanShan Audio & Video Laboratory**](https://www.mlslabs.com.cn/). It is designed for real-time visualization, management, and scalable hybrid rendering of 3D Gaussian Splatting (3DGS) and dynamic Volumetric Video (4DGS).

Unlike traditional Niagara-based solutions, this plugin utilizes a **custom low-level rendering pipeline**. This allows it to maintain exceptionally high frame rates even when processing millions of Gaussians, effectively bypassing common performance bottlenecks.

Since we are at early access, current accessible features are summarized below:
- **High-Performance Static 3DGS**: Supports 7M+ Gaussians while maintaining 50+ FPS(tested on NVIDIA RTX 4070 Ti).
- **Dynamic 4DGS Playback**: Real-time volumetric video sequence playback supporting 100K+ Gaussians at 100+ FPS(tested on NVIDIA RTX 4070 Ti).
- **Sequencer Integration**: Full support for UE Sequencer, allowing keyframe control over volumetric playback.
- **Native Custom Engine**: Built from the ground up (Non-Niagara) for maximum throughput and low latency.
- **Production Workflow**: Seamless integration with native UE assets and rapid resource importing.

---
# Getting Started

## Video Tutorial

Youtube（English）：  


B站（中文）：  


## System Requirements

- **Operating System**: Windows 10 or 11 (64-bit)
- **Unreal Engine**: 5.5.x
- **Graphics API**: DirectX 12
- **GPU Requirements**: NVIDIA GPU supporting **Shader Model 7.5** or higher (Turing architecture and above).
- **Minimum Hardware**: NVIDIA GeForce **RTX 2060** or better.
- **Recommended Hardware**: NVIDIA GeForce **RTX 4070Ti** or better.


## Plugin download

  1. Open github Release page 

  <img src="Media/image/github_release.jpg" width="500" />

  2. Choose the latest version (currently v1.0.0.5_beta).
  <img src="Media/image/github_release_v1.0.0.5_beta.jpg" width="500" />
  
  3. Download the zip file.

  <img src="Media/image/download_link.jpg" width="500" />

  4. Installation:
  To package your project, unzip MLSLabsRenderer-Lite_V1.0.0.5_beta_ue5.5.zip to your Engine Installation Path `Plugins\Marketplace`.

  <img src="Media/image/unzip.jpg" width="500" />
  
  Alternatively, unzip it directly into your project's `Plugins\` folder.
  
  <img src="Media/image/after_unzip.jpg" width="500" />
  
  5.Open Unreal Editor，enable the MLSLabsRenderer Plugin, and restart editor.

  <img src="Media/image/enable_plugin.jpg" width="500" />

 ## Demo Data Download Links:

It is recommended to download .ply files from [SuperSplat](https://superspl.at/), which can then be imported into Unreal Engine (UE) via this plugin for real-time rendering.

## Open demo project
This repo contains a demo project with an example scene and level

0. download using git clone
```
git clone https://github.com/mlslabs/MLSLabsGaussianSplattingRenderer-UE.git
```

1. Open `PluginDemo.uproject` to start UE
2. Open `Maps/Test` level

## Import Static Gaussian Splatting Models

1.Click on the 'Import single 3D Gaussian Splatting file' button on the navigation bar.
<img src="Media/image/enable_plugin.jpg" width="500" />

2.Select your 'ply' file.

Special thanks to saemranian for providing the test data:[Ahmad_Apt_Mix_01](https://superspl.at/view?id=f32cc087) .

<img src="Media/image/select_single_ply.jpg" width="500" />

3.After importing, drag the Blueprint (BP) asset into the viewport.

<img src="Media/image/single_ply_drag_to_level.jpg" width="500" />

4.The scene will render. You can adjust its position using the Move, Rotate, and Scale gizmos.
'Note': The "Splat Data Path" uses an absolute path. If you move the project or clone it to a new machine, ensure you update the path to point to your local .ply file.

<img src="Media/image/render_single_ply.jpg" width="500" />


## Import Animated Gaussian Splatting (4DGS/Volumetric Video)

1.Click the 'Import multiple 3D Gaussian Splatting files' button on the navigation bar.
<img src="Media/image/import_multiple_plys.jpg" width="500" />

2.Select the .ply files. (You do not need to select all files; selecting two or more files will load the entire sequence in that directory).

<img src="Media/image/select_multiple_plys.jpg" width="500" />

3.Drag the animation BP asset into the viewport.

<img src="Media/image/multiple_ply_drag_to_level.jpg" width="500" />

4.The first frame will render. 'Frame Count' indicates the total number of frames loaded.

You can adjust its position using the Move, Rotate, and Scale gizmos.
'Note': The "Splat Data Path" uses an absolute path. If you move the project or clone it to a new machine, ensure you update the path to point to your local .ply file's directory.

<img src="Media/image/render_multiple_ply.jpg" width="500" />

5.You can press the 'F' key to focus on the Gaussian Splatting Actor when it is selected.

<img src="Media/image/focus.jpg" width="500" />

6.To enable playback:
Click the 'Add' button in the Details panel.
Search for and add the 'Volume Actor' component.

<img src="Media/image/add_volume_actor_comp.jpg" width="500" />

Click the 'Play' (Run) button on the top navigation bar.

<img src="Media/image/enter_run_mode.jpg" width="500" />

the Volume video(4DGS) will be played.

<img src="Media/image/play_volume_video.jpg" width="500" />

## Keyframe Control via UE Sequencer

1.Create Level Sequence.

<img src="Media/image/new_sequence.jpg" width="500" />

2.Add the selected Animation Gaussian Splatting Actor to the Sequencer.

<img src="Media/image/add_animation_actor_to_seq.jpg" width="500" />

3.Add the AnimSplattingComponent to the track.

<img src="Media/image/add_AnimSplattingComponent.jpg" width="500" />

4.Add Frame Index to the track.

<img src="Media/image/add_FrameIndex.jpg" width="500" />

5.Add keyframes to the 'Frame Index' track as needed to control playback.

<img src="Media/image/add_key_frame.jpg" width="500" />

## Packaging for Windows

The plugin is currently provided as a Shipping package, so you must set your Build Configuration to Shipping.

<img src="Media/image/package.jpg" width="500" />

Important: After packaging, ensure the .ply files are stored in the same absolute data path on the target machine for the application to run correctly.
