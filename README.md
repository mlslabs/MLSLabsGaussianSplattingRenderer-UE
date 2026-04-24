English | [中文](./README_CN.md)

<div align="center">
  <a href="https://mlslabs.com.cn/">
    <picture>
      <img src="Media/image/mlslabs.png" alt="MLSLabsRenderer-Pro" height="100">
    </picture>
  </a>
</div>

<div align="center">

**MLSLabsRenderer-Pro (3D Gaussian Splatting UE5 Plugin)**
[**mls4dlive**](https://mls4dlive.cn/)

High-performance 3D Gaussian Splatting and 4D volumetric video Plugin for Unreal Engine 5.

Real-time visualization, Sequencer-driven playback, and a custom non-Niagara rendering pipeline for millions of Gaussians.

<p align="center">
  <a href="./LICENSE">
    <img alt="License" src="https://img.shields.io/badge/License-Apache_2.0-blue.svg">
  </a>
  <img alt="UE Version" src="https://img.shields.io/badge/Unreal_Engine-5.6-white?logo=unrealengine&logoColor=white&color=0E1128">
  <img alt="Topic 3DGS" src="https://img.shields.io/badge/Topic-3DGS-orange">
  <img alt="Topic 4DGS" src="https://img.shields.io/badge/Topic-4DGS-red">
  <img alt="Platform" src="https://img.shields.io/badge/Platform-Windows-blue?logo=windows">
</p>

[**Downloads**](https://github.com/mlslabs/MLSLabsGaussianSplattingRenderer-UE/releases) •
[**Tutorial Video**](https://youtu.be/4ArswzhQ0VU) •
[**Tutorial Documentation**](https://github.com/mlslabs/MLSLabsGaussianSplattingRenderer-UE/blob/ue5.6-plugin-pro/docs/README.md) •
[**Getting Started**](#getting-started) •
[**Installation**](#installation) •
[**Join Discord**](https://discord.com/channels/1485158006705623062/1485158007464788133) •
[**Contributors**](#contributors)

<img src="Media/image/dance.gif" width="720" title="4DGS Redefines VR Filmmaking" />

[**Application Cases**](#application-cases) •
[**Introduction**](#introduction) •
[**Features**](#features) •
[**Project Structure**](#project-structure) •
[**Roadmap**](#roadmap-pro-version) •
[**Lite version**](https://github.com/mlslabs/MLSLabsGaussianSplattingRenderer-UE/tree/ue5.6-plugin-lite) •
[**Release Notes**](#release-notes) •
[**License**](https://github.com/mlslabs/MLSLabsGaussianSplattingRenderer-UE/blob/ue5.6-plugin-pro/LICENSE)

</div>

---

<a id="application-cases"></a>

## 3DGS & 4DGS Application Cases

- [4DGS Redefines VR Filmmaking](https://youtu.be/wN7Sm6GbV7U)

---

## Introduction

**MLSLabsRenderer-Pro** is a high-performance Unreal Engine 5 (UE5) plugin developed by [**MaLanShan Audio & Video Laboratory**](https://www.mlslabs.com.cn/). It is engineered for real-time visualization, management, and scalable hybrid rendering of 3D Gaussian Splatting (3DGS) and dynamic Volumetric Video (4DGS).

By utilizing a custom rendering pipeline rather than traditional particle systems, the plugin ensures high frame rates even with millions of Gaussians, effectively bypassing the performance bottlenecks typical of Niagara.

---

## Project Structure

```text
📦 MLSLabsGaussianSplattingRenderer-UE
├─ 📁 docs/                  # Plugin guides (EN / CN)
├─ 📁 Media/                 # Documentation images and videos
├─ 📁 Plugins/               # MLSLabsRenderer plugin source
├─ 📁 TestData/              #Test Data
    ├─ 📁 ply/               #ply Data
	    ├─ data_download_link.md               # Test data download link
├─ LICENSE
├─ README.md                 # Main overview file
└─ README_CN.md              # 中文概述
```
## Repository layout

The `Plugins` folder contains the MLSLabsRenderer plugin source code. The `docs` folder contains detailed plugin guides.

**Quick Links:**

- [Plugin Guide (EN)](./docs/README.md)
- [插件指南 (中文)](./docs/README_CN.md)

### Features

- **High-Performance Static 3DGS: High-quality rendering of standard .ply models supporting up to 5M+ Gaussians at 50 FPS+(tested on NVIDIA RTX 4070 Ti).**

<img src="Media/image/7M_50+fps.jpg" width="1000" />

- **Dynamic 4DGS Playback: Real-time volumetric video sequence playback supporting 100K+ Gaussians at 100 FPS+.(tested on NVIDIA RTX 4070 Ti)**

- **Sequencer Integration: Full support for UE Sequencer, allowing users to keyframe volumetric playback and control timelines.**

- **Custom Rendering Engine: Built from the ground up (Non-Niagara) for maximum throughput and low latency.**

- **Production Workflow: Seamless integration with native UE assets and fast resource importing.**

- **VR & Binocular Rendering: Native support for high-fidelity VR content.**

- **Performance Boost: 120 FPS+ for 4DGS and 60 FPS+ for 7M+ Gaussians static scenes.**

- **High-Compression Static 3DGS: Added support for the .sog format, designed for high-compression ratio 3DGS.**

---

## Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/mlslabs/MLSLabsGaussianSplattingRenderer-UE.git
cd MLSLabsGaussianSplattingRenderer-UE
```

### 2. Requirements

- **Operating System**: Windows 10 or 11 (64-bit)
- **Unreal Engine**: 5.6.x
- **Graphics API**: DirectX 12
- **GPU Requirements**: NVIDIA GPU supporting **Shader Model 7.5** or higher (Turing architecture and above).
- **Minimum Hardware**: NVIDIA GeForce **RTX 2060** or better.
- **Recommended Hardware**: NVIDIA GeForce **RTX 4070Ti** or better.

<a id="installation"></a>

### 3. Installation

Copy the Plugins/MLSLabsRenderer folder to your project's Plugins/ directory.

For Packaging: To ensure successful project packaging, copy the MLSLabsRenderer folder to your UE5.6 Engine directory (e.g., Epic Games\UE_5.6\Engine\Plugins\Marketplace).

Enable MLSLabsRenderer in the Unreal Editor Plugin Browser.

### Roadmap (Pro Version)

The upcoming Professional version will offer significant performance boosts and enterprise-level features:

- [ ] Compressed 4DGS: Support for specialized compressed formats to reduce memory usage.

- [ ] Advanced Lighting: Support for Point/Directional lights with self-shadowing.

## Release Notes
**Pro_V1.0.2.10_beta**
1. Supports .sog format Gaussian Splatting files..
2. Copy imported PLY data and use relative paths for references to ensure seamless packaging and distribution.
3. Update and calculate the bounding box after loading Gaussian data to ensure the coordinate gizmo displays correctly in the Editor.
4. ensure package, copy ply and sog files successfully for ue5.6.

**Lite_V1.0.0.10_beta**
1. Fixed an issue where colors appeared abnormal on Scaled Gaussian Splatting nodes.
2. Resolved the "access denied" error when deleting libraries (e.g., cublas64_12.dll) during the packaging process.
3. Fixed incorrect rotation of Gaussian characters when Pitch, Yaw, and Roll operations occur simultaneously.
4. Added support for rendering on non-primary GPUs (ID > 0) for multi-card systems.
5. Copy imported PLY data and use relative paths for references to ensure seamless packaging and distribution.
6. Update and calculate the bounding box after loading Gaussian data to ensure the coordinate gizmo displays correctly in the Editor.

**Pro_V1.0.1.10_beta**
1. Performance Boost: 120 FPS+ for 4DGS and 60 FPS+ for 5M+ Gaussians static scenes.
2. VR & Binocular Rendering: Native support for high-fidelity VR content.
3. Fixed an issue where colors appeared abnormal on Scaled Gaussian Splatting nodes.
4. Resolved the "access denied" error when deleting libraries (e.g., cublas64_12.dll) during the packaging process.
5. Added logo watermarking; note that paid removal of watermarks is not yet supported.
6. Fixed incorrect rotation of Gaussian characters when Pitch, Yaw, and Roll operations occur simultaneously.
7. Added support for rendering on non-primary GPUs (ID > 0) for multi-card systems.

**Lite_V1.0.0.9_beta**
1. Fixed blending artifacts caused by depth buffer resolution mismatch between Editor and Play modes.
2. Supports outputting logs to the Unreal Engine log file.

**Lite_V1.0.0.8_beta**
1. Support PLY files with sh_degree=0.
2. Fix significant frame rate drop and memory exhaustion when entering preview mode for newly added cameras.

**Lite_V1.0.0.7_beta**
1. Decouple the LibTorch library and prompt users to download it manually upon the first time using the plugin.
2. support ue 5.5,5.6,5.7.

**Lite_V1.0.0.6_beta**
1. fixed Repeatedly dragging to update the Gaussian Actor's transform causes the engine to crash. 

**Lite_V1.0.0.5_beta**
1. Standard PLY Support (Static): Supports importing standard .ply format static Gaussian Splatting scenes with high-efficiency rendering.
2. Volumetric Video (4DGS): Supports importing standard .ply sequence frames for volumetric video (4DGS) with high-efficiency rendering.
3. Quick Focus: Press the F key to quickly focus on and frame the Gaussian Actor in the viewport.
4. Sequencer Integration: Volumetric Video Actors support keyframe animation and timeline control within the Unreal Engine Sequencer.
5. DirectX 12: Full support for DX12 (DirectX 12) for modern rendering performance.
6. Shipping Support: Supports application packaging and distribution for Shipping builds.

## Contributors

<a href="https://github.com/mlslabs/MLSLabsGaussianSplattingRenderer-UE/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=mlslabs/MLSLabsGaussianSplattingRenderer-UE" />
</a>
