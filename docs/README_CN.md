# MLSLabsRenderer-Lite

<a href="./LICENSE">
        <img alt="License" src="https://img.shields.io/badge/License-Apache_2.0-blue.svg"></a>

[English](./README.md) | 中文

[
<img src="../Media/image/mlslabs.png" width="583" title="马栏山音视频实验室" />
](https://github.com/mlslabs)


# Introduction

**MLSLabsRenderer-Lite** 是由[**马栏山音视频实验室**](https://www.mlslabs.com.cn/).开发的一款高性能虚幻引擎 5 (UE5) 插件。它专为 3D 高斯泼溅 (3DGS) 和动态体积视频 (4DGS) 的实时可视化、管理及可扩展混合渲染而设计。

与传统的基于 Niagara 的方案不同，本插件采用了自定义底层渲染管线。这使得它在处理数百万个高斯点时仍能保持极高的帧率，有效绕过了常见的性能瓶颈。

目前项目处于早期访问（Early Access）阶段，现已实现的功能概括如下：
- **高性能静态 3DGS**:支持 700 万+ 高斯点，并保持 50+ FPS（在NVIDIA RTX 4070Ti上测试）。
- **动态4DGS播放**: 实时体积视频序列播放，支持 10 万+ 高斯点，帧率可达 100+ FPS（在NVIDIA RTX 4070Ti上测试）。
- **Sequencer 集成**: 完全支持 UE Sequencer，允许通过关键帧控制体积视频播放。
- **原生自定义引擎**: 从零构建（非 Niagara），以实现最大吞吐量和低延迟。
- **生产级工作流**:与UE原生资产无缝集成，支持快速资源导入。

---
# 快速入门

## 视频教程

Youtube（英文）：  
[How to Use MLSLabsRenderer (Gaussian Splatting) Plugin in UE5](https://youtu.be/htrDPpAaraU)

B站（中文）：  
[MLSLabsRenderer（高斯泼溅）插件操作教程](https://www.bilibili.com/video/BV1dgcizLEAx/?vd_source=2c7de8ebd046c0fc280b916fd7f72364)


## 系统要求

- **操作系统**: Windows 10 or 11 (64-bit)
- **虚幻引擎**: 5.6.x
- **图形 API**: DirectX 12
- **GPU 要求**: 支持 Shader Model 7.5 或更高版本的 NVIDIA GPU（Turing 架构及以上）。
- **最低硬件**: NVIDIA GeForce RTX 2060 或更高。
- **推荐硬件**: NVIDIA GeForce RTX 4070 Ti或更高。


## 插件下载

  1. 打开 GitHub Releases 页面。

  <img src="../Media/image/github_release.jpg" width="500" />

  2. 根据引擎版本选择合适的插件版本。
  
  <img src="../Media/image/github_release_latest.jpg" width="500" />
  
  3. 下载 zip 压缩包。

  <img src="../Media/image/download_link.jpg" width="500" />

  4. 安装方法：
  如果你需要打包项目，请将下载的插件包解压到引擎安装目录下的 'Plugins\Marketplace' 文件夹中。

  <img src="../Media/image/unzip.jpg" width="500" />
  
  如果没有Marketplace目录，请新建一个。
  
  <img src="../Media/image/marketplace.jpg" width="500" />
  
  或者，直接解压到你项目根目录的`Plugins\`文件夹中。
  
  <font color="red">为确保项目顺利打包，请将 `MLSLabsRenderer` 文件夹解压到 UE5.6 引擎安装目录中</font>
  
  <img src="../Media/image/after_unzip.jpg" width="500" />
  
  <font color="red">本插件与Jawset Postshot UE5插件冲突，请将Jawset Postshot插件备份到非Plugins或者Plugins\Marketplace目录。</font>
  
  5. 打开虚幻编辑器，启用MLSLabsRenderer 插件，并重启编辑器。

  <img src="../Media/image/enable_plugin.jpg" width="500" />
  
  6. 启动虚幻编辑器后，打开安装环境提示，或者在导航栏点击安装环境按钮。
  
  <img src="../Media/image/setup_env_tip.jpg" width="500" />
  
  7. 安装环境界面如下，点击"Install Dependencies"。
  
  <img src="../Media/image/install_dep.jpg" width="500" />
  
  8. 等待下载安装libtorch包，请耐心等待一下。
  
  <img src="../Media/image/install_dep_progress.jpg" width="500" />
  
  
   如果下载失败，出现如下错误：
   
   
   <img src="../Media/image/download_faile.jpg" width="500" />
   
   
   可以尝试直接下载libtorch库 (https://download.pytorch.org/libtorch/cu128/libtorch-win-shared-with-deps-2.7.0%2Bcu128.zip) ，然后解压到以下目录：
   
   
   <img src="../Media/image/unzip_libtorch.jpg" width="500" />
   
   
  9. 安装完成，点击自动重启编辑器。
  
  <img src="../Media/image/install_dep_complete.jpg" width="500" />
  
  10. 自动重启编辑器失败，需要手动重启编辑器，这一步非常重要，否则插件无法正确加载。
  
  <img src="../Media/image/install_dep_manual_restart.jpg" width="500" />

 ## 示例数据下载链接：

建议到[SuperSplat](https://superspl.at/) 下载ply文件，可通过本插件导入虚幻引擎 (UE) 进行实时渲染。


## 打开演示项目
本仓库包含一个带有示例场景和关卡的演示项目。

0. 使用 git clone 下载：
```
git clone https://github.com/mlslabs/MLSLabsGaussianSplattingRenderer-UE.git
```

1. 打开 PluginDemo.uproject 启动 UE。
2. 打开 Maps/Test 关卡。

## 导入静态高斯泼溅模型

1.点击导航栏上的“Import single 3D Gaussian Splatting file” 按钮。

<img src="../Media/image/import_single_ply.jpg" width="500" />

2.选择你的 .ply 文件。

感谢作者saemranian提供的测试数据[Ahmad_Apt_Mix_01](https://superspl.at/view?id=f32cc087)。

<img src="../Media/image/select_single_ply.jpg" width="500" />

3.导入完成后，将生成的蓝图 (BP) 资产拖入视口。

<img src="../Media/image/single_ply_drag_to_level.jpg" width="500" />

4.场景将开始渲染。你可以使用移动、旋转和缩放工具来调整其位置。 注意：“Splat Data Path”（泼溅数据路径）使用的是绝对路径。如果你移动了项目或将其克隆到新机器上，请务必更新该路径以指向你本地的 .ply 文件。

<img src="../Media/image/render_single_ply.jpg" width="500" />


## 导入动画高斯泼溅（4DGS/体积视频）模型

1.点击导航栏上的 “Import multiple 3D Gaussian Splatting files” 按钮。

<img src="../Media/image/import_multiple_plys.jpg" width="500" />

2.选择多个 .ply 文件（无需选择所有文件；只需选择其中两个以上的文件，插件会自动加载该目录下的整个序列）。

<img src="../Media/image/select_multiple_plys.jpg" width="500" />

3.将生成的动画蓝图 (BP) 资产拖入视口。

<img src="../Media/image/multiple_ply_drag_to_level.jpg" width="500" />

4.动画的第一帧将显示。“Frame Count”（帧数）表示加载的总帧数。

你可以使用移动、旋转和缩放工具调整其位置。 注意：“Splat Data Path” 使用的是绝对路径。如果你移动了项目，请确保将路径更新为你本地 .ply 序列所在的目录。

<img src="../Media/image/render_multiple_ply.jpg" width="500" />

5.选中高斯泼溅 Actor 后，可以按 “F” 键快速聚焦。

<img src="../Media/image/focus.jpg" width="500" />

6.启用播放： 在“细节”（Details）面板中点击 “Add”（添加）按钮。 搜索并添加 “Volume Actor” 组件。

<img src="../Media/image/add_volume_actor_comp.jpg" width="500" />

点击顶部导航栏的 “Play”（运行）按钮。

<img src="../Media/image/enter_run_mode.jpg" width="500" />

体积视频 (4DGS) 将开始播放。

<img src="../Media/image/play_volume_video.jpg" width="500" />

## 通过 UE Sequencer 控制关键帧

1.创建一个新的 Level Sequence（层级序列）。

<img src="../Media/image/new_sequence.jpg" width="500" />

2.将选中的动画高斯泼溅 Actor 添加到 Sequencer 中。

<img src="../Media/image/add_animation_actor_to_seq.jpg" width="500" />

3.为轨道添加 AnimSplattingComponent。

<img src="../Media/image/add_AnimSplattingComponent.jpg" width="500" />

4.在轨道中添加 Frame Index（帧索引）。

<img src="../Media/image/add_FrameIndex.jpg" width="500" />

5.根据需要，在 “Frame Index” 轨道上添加关键帧以控制播放进度。

<img src="../Media/image/add_key_frame.jpg" width="500" />

## Windows 平台打包

该插件目前以 Shipping 包形式提供，因此你必须将项目的“构建配置”（Build Configuration）设置为 Shipping。
打包环境要求：Visual Studio 2022, MSVC v143 x64。

<img src="../Media/image/package.jpg" width="500" />

重要提示：打包后，请确保 .ply 文件存放在目标机器上相同的绝对路径下，以保证应用程序能够正确运行。
