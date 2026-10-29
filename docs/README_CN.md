# MLSLabsRenderer-Pro

<a href="./LICENSE">
        <img alt="License" src="https://img.shields.io/badge/License-Apache_2.0-blue.svg"></a>

[English](./README.md) | 中文

[
<img src="../Media/image/mlslabs.png" width="583" title="马栏山音视频实验室" />
](https://github.com/mlslabs)


# Introduction

[**MLSLabsRenderer-Pro**](https://mls4dlive.cn/) 是由[**马栏山音视频实验室**](https://www.mlslabs.com.cn/).开发的一款高性能虚幻引擎 5 (UE5) 插件。它专为 3D 高斯泼溅 (3DGS) 和动态体积视频 (4DGS) 的实时可视化、管理及可扩展混合渲染而设计。

与传统的基于 Niagara 的方案不同，本插件采用了自定义渲染管线。这使得它在处理数百万个高斯点时仍能保持极高的帧率，有效绕过了常见的性能瓶颈。

现已实现的功能概括如下：
- **高性能静态 3DGS**:支持 700 万+ 高斯点，并保持 50+ FPS（在NVIDIA RTX 4070Ti上测试）。
- **动态4DGS播放**: 实时体积视频序列播放，支持 10 万+ 高斯点，帧率可达 100+ FPS（在NVIDIA RTX 4070Ti上测试）。
- **Sequencer 集成**: 完全支持 UE Sequencer，允许通过关键帧控制体积视频播放。
- **高压缩比静态3DGS：** 支持用于高压缩比3DGS 的 `.sog` 格式。
- **Android支持**: 支持Android设备渲染高斯，25 万+高斯点，60+ FPS（在REDMI K80上测试）。
- **VR头显设备支持**:支持VR头显机直接运行，25 万+高斯点，30+ FPS（在Pico 4 Ultra Enterprise上测试），也支持PC串流播放。

---
# 快速入门

## 视频教程

Youtube（英文）：  
[How to Use MLSLabsRenderer (Gaussian Splatting) Plugin in UE5(Updated)](https://youtu.be/4ArswzhQ0VU)

B站（中文）：  
[MLSLabsRenderer（高斯泼溅）插件操作教程](https://www.bilibili.com/video/BV1dgcizLEAx/?vd_source=2c7de8ebd046c0fc280b916fd7f72364)


## 系统要求

- **操作系统**: Windows 10 或 11 (64位)
- **虚幻引擎版本**: 5.8.x
- **图形 API**: DirectX 12 或 Vulkan。
- **显卡**: 需支持 DirectX 12（Feature Level 12_2）的以下系列或更新型号：
  - **NVIDIA**: GeForce RTX 20 系列及以上。
  - **AMD**: Radeon RX 6000 系列及以上。
  - **移动端（Android）**: Mali-G68/G71/G72/G76/G77/G78/G7xx 系列，或 Adreno 5xx/6xx/7xx 系列。
- **最低硬件**: NVIDIA GeForce RTX 2060 / AMD Radeon RX 6600 或同级显卡。
- **推荐硬件**: NVIDIA GeForce RTX 4070 Ti 或同级显卡。


## 插件下载

  1. 打开 GitHub Releases 页面。

  <img src="../Media/image/github_latest_release_2.0.jpg" width="500" />

  2. 根据引擎版本选择合适的插件版本。
  
  <img src="../Media/image/github_release_2.0.jpg" width="500" />
  
  3. 下载 zip 压缩包。

  <img src="../Media/image/download_link_cloud_disk.jpg" width="500" />

  4. 安装方法：
  如果你需要打包项目，请将下载的插件包解压到引擎安装目录下的 'Plugins\Marketplace' 文件夹中。

  <img src="../Media/image/unzip_2.0.jpg" width="500" />
  
  如果没有Marketplace目录，请新建一个。
  
  <img src="../Media/image/marketplace.jpg" width="500" />
  
  或者，直接解压到你项目根目录的`Plugins\`文件夹中。
  
  <font color="red">为确保项目顺利打包，请将 `MLSLabsRenderer` 文件夹解压到 UE5.8 引擎安装目录中</font>
  
  <img src="../Media/image/after_unzip.jpg" width="500" />
  
  5. 打开虚幻编辑器，启用MLSLabsRenderer 插件，并重启编辑器。

  <img src="../Media/image/enable_plugin.jpg" width="500" />
  

 ## 示例数据下载链接：

建议到 [Ply TestData Dir](../TestData/ply/data_download_link.md) 下载ply文件， [Ply Sequence TestData Dir](../TestData/ply_sequence/data_download_link.md) 下载ply序列文件，可通过本插件导入虚幻引擎 (UE) 进行实时渲染。


## 在虚幻项目中使用

1. 创建或打开虚幻引擎 5.8 工程，在 **编辑 → 插件** 中启用 **MLSLabsRenderer**，然后重启编辑器。

## 导入静态高斯泼溅模型

打开Unreal Editor，新建Demo工程，并新建一个Level。

1.点击导航栏上的“Import single 3D Gaussian Splatting file” 按钮。

<img src="../Media/image/import_single_ply.jpg" width="500" />

2.选择你的 .ply 文件。

<img src="../Media/image/select_single_ply.jpg" width="500" />

3.导入完成后，将生成的蓝图 (BP) 资产拖入视口。

<img src="../Media/image/single_ply_drag_to_level.jpg" width="500" />

4.场景将开始渲染。你可以使用移动、旋转和缩放工具来调整其位置。 注意：“Splat Data Path”（泼溅数据路径）使用的是相对路径。

<img src="../Media/image/render_single_ply.jpg" width="500" />


## 导入动画高斯泼溅（4DGS/体积视频）模型

1.点击导航栏上的 “Import multiple 3D Gaussian Splatting files” 按钮。

<img src="../Media/image/import_multiple_plys.jpg" width="500" />

2.选择多个.ply文件（选择多少个，就会导入多少帧，但是需至少选择2个以上；也可以全部选择，导入所有帧）。

<img src="../Media/image/select_multiple_plys_2.jpg" width="500" />

3.将生成的动画蓝图 (BP) 资产拖入视口。

<img src="../Media/image/multiple_ply_drag_to_level.jpg" width="500" />

4.动画的第一帧将显示。“Frame Count”（帧数）表示加载的总帧数。

你可以使用移动、旋转和缩放工具调整其位置。 注意：“Splat Data Path” 使用的是相对路径。

<img src="../Media/image/render_multiple_ply.jpg" width="500" />

5.选中高斯泼溅 Actor 后，可以按 “F” 键快速聚焦。

<img src="../Media/image/focus.jpg" width="500" />

6.启用播放： 在Outliner中点击 编辑BP_Animatable_Gaussian_Splatting_WanJiangDance蓝图，

<img src="../Media/image/EditAnimatableGaussianBP.jpg" width="500" />

在EventGraph中，右键输入 "mlslabs"，往上滚动滑动条，找到 "Play"接口，

<img src="../Media/image/SearchPlayApi.jpg" width="500" />

将Event BeginPlay节点连接 Play节点。

<img src="../Media/image/ConnectPlayApi.jpg" width="500" />

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

## 打包 Pico VR APK

将工程打包为 Android APK 并安装到 Pico 头显的步骤，见 [打包 Pico VR APK](./Android_Package_CN.md)。
