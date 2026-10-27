# MLSLabs Renderer 蓝图 API

[English](./BlueprintAPI.md) | 中文

本页列出 `MLSLabsRenderer` 插件导出到蓝图的类型、变量、事件调度器和函数节点。

这些函数都是带执行引脚的调用节点。输入、输出表只列出数据引脚。

## 目录

- [类型](#类型)
- [Gaussian Splatting Actor](#gaussian-splatting-actor)
- [Gaussian Splatting Component](#gaussian-splatting-component)
- [MLS Labs Ani Gaussian Splatting Actor](#mls-labs-ani-gaussian-splatting-actor)
- [MLS Labs Ani Gaussian Splatting Component](#mls-labs-ani-gaussian-splatting-component)
- [Animatable Gaussian Splatting Actor](#animatable-gaussian-splatting-actor)
- [Animatable Gaussian Splatting Component](#animatable-gaussian-splatting-component)
- [MLS Labs Renderer Subsystem](#mls-labs-renderer-subsystem)
- [Gaussian Splating Renderer Library](#gaussian-splating-renderer-library)
- [Misc Helper Library](#misc-helper-library)

## 选用哪个类

| 蓝图类 | 数据 | 蓝图里怎么用 |
| --- | --- | --- |
| Gaussian Splatting Actor | 一个静态溅射文件 | 设置 **Splat Data Path**。组件自行加载，没有播放节点。 |
| MLS Labs Ani Gaussian Splatting Actor | 一个 `.mlslabs` 文件 | 对 Actor 调用 **Play**、**Stop**、**Pause**、**Can Play**。在组件上用 **Frame Index** 跳帧。 |
| Animatable Gaussian Splatting Actor | 一个帧文件目录 | 没有播放节点。在组件上设置 **Frame Index**，或调用 **Update Frame Index**。 |

---

## 类型

### Mlslabs Playback State

**EMlslabs Playback State**

原生 `.mlslabs` 播放器报告的播放状态。可作为变量类型，也可作为 **On Playback State Changed** 的参数。

| 值 | 显示名 | 说明 |
| --- | --- | --- |
| Started | Started | 播放已开始。 |
| Playing | Playing | 正在播放。 |
| Ended | Ended | 播放已结束。 |

### Three D Gaussians Data

**Three D Gaussians Data**

静态溅射资源的蓝图结构体。可使用 **Make Three D Gaussians Data**、**Break Three D Gaussians Data** 和 **Set Members in Three D Gaussians Data**。

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| string | Splat File Name | 溅射文件名。默认为空字符串。 |

### Three D Gaussians Animation

**Three D Gaussians Animation**

帧序列溅射资源的蓝图结构体。可使用 **Make**、**Break** 和 **Set Members** 节点。

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| string 数组 | Splat Files | 序列中的帧文件。 |
| string | Splat File Dir Name | 帧文件所在目录名。默认为空字符串。 |
| integer | Frame Num | 帧数。默认为 0。 |

---

## Gaussian Splatting Actor

静态三维高斯溅射 Actor。可在蓝图中作为类型使用，也可被蓝图继承。根组件是 **Gaussian Splatting Component**。

放置后设置组件上的 **Splat Data Path**。组件会把该路径交给原生渲染器，并在可以拥有溅射节点时加载文件。

### Splatting Component

只读变量。拖出 Actor 引用后使用 **Get Splatting Component**。

**目标是** Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| Gaussian Splatting Component 对象引用 | Splatting Component | 作为根组件创建的静态溅射组件。 |

---

## Gaussian Splatting Component

可添加到蓝图 Actor 上的静态溅射组件。

子类 **MLS Labs Ani Gaussian Splatting Component** 与 **Animatable Gaussian Splatting Component** 继承本组件的 **Splat Data Path**。路径含义由具体子类解释。

### Splat Data Path

可读写变量。在本类上表示静态溅射文件路径。路径为空时不开始加载。在编辑器中修改该属性会加载新路径，并替换上一个溅射节点。

**目标是** Gaussian Splatting Component  
**类别** MLSLabsRenderer

#### Get Splat Data Path

##### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| string | Splat Data Path | 当前溅射数据路径。 |

#### Set Splat Data Path

##### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| string | Splat Data Path | 要加载的静态溅射文件路径。 |

##### 输出

此节点没有数据输出。

---

## MLS Labs Ani Gaussian Splatting Actor

`.mlslabs` 四维高斯溅射 Actor。可在蓝图中作为类型使用，也可被蓝图继承。根组件是 **MLS Labs Ani Gaussian Splatting Component**。

把 **Splat Data Path** 设为 `.mlslabs` 文件路径。加载成功后 **Can Play** 变为 true。加载完成前，**Play**、**Stop**、**Pause** 不会做事，也不会记下延迟播放请求。

跳帧在组件上，不在本 Actor 上。**Frame Count** 是片段时长（秒）乘以 30 后截断成的整数。**Frame Index** 按 `时间 = 帧号 / 30` 秒跳转。

### Splatting Component

**目标是** MLS Labs Ani Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| MLS Labs Ani Gaussian Splatting Component 对象引用 | Splatting Component | 作为根组件创建的 `.mlslabs` 播放组件。 |

### On Playback State Changed

事件调度器。组件在游戏线程上把原生播放状态转发到此调度器。可对 Actor 使用 **Assign**、**Bind** 或 **Call**。

**目标是** MLS Labs Ani Gaussian Splatting Actor  
**类别** MLSLabsRenderer

拥有者必须是本 Actor。转发的值会被限制为 **Started**、**Playing** 或 **Ended**。

#### 事件输出

绑定到该调度器的事件具有以下输出。

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| EMlslabs Playback State | Playback State | 原生播放器报告的播放状态。 |

#### 调用输入

**Call On Playback State Changed** 的数据输入。

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| EMlslabs Playback State | Playback State | 要广播给已绑定事件的状态。 |

### Play

开始播放已加载的 `.mlslabs`。组件不存在或节点尚未加载时不做任何事。

**目标是** MLS Labs Ani Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Stop

停止播放。组件不存在或节点尚未加载时不做任何事。

**目标是** MLS Labs Ani Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Pause

暂停播放。组件不存在或节点尚未加载时不做任何事。

**目标是** MLS Labs Ani Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Can Play

`.mlslabs` 文件是否已经加载完成、可以播放。

**目标是** MLS Labs Ani Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 加载成功后为 true。组件不存在或文件尚未加载时为 false。 |

---

## MLS Labs Ani Gaussian Splatting Component

可添加到蓝图 Actor 上的 `.mlslabs` 播放组件。Actor 上的 **Play**、**Stop**、**Pause**、**Can Play** 都转发到本组件。

**Splat Data Path** 继承自 **Gaussian Splatting Component**。在本类上它是 `.mlslabs` 文件路径，不是静态溅射文件。

若拥有者是 **MLS Labs Ani Gaussian Splatting Actor**，播放状态会广播到该 Actor 的 **On Playback State Changed**。

写入 **Frame Index** 会走 **Set Frame Index**。蓝图里没有同名的独立函数节点。

### Play

**目标是** MLS Labs Ani Gaussian Splatting Component  
**类别** MLSLabsRenderer

组件失效或溅射节点哈希仍为 0 时直接返回。

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Stop

**目标是** MLS Labs Ani Gaussian Splatting Component  
**类别** MLSLabsRenderer

组件失效或节点尚未加载时直接返回。

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Pause

**目标是** MLS Labs Ani Gaussian Splatting Component  
**类别** MLSLabsRenderer

组件失效或节点尚未加载时直接返回。

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Can Play

**目标是** MLS Labs Ani Gaussian Splatting Component  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | `.mlslabs` 加载成功后为 true，否则为 false。 |

### Frame Index

可读写浮点，默认 0，可做插值轨道。蓝图或 Sequencer 写入时调用 **Set Frame Index**。

显示的帧是把该值截断为整数后的结果。只有索引落在 `[0, Frame Count)`、节点已加载且组件已注册时才会跳转。原生播放器随后被设到 `帧号 / 30` 秒。

**目标是** MLS Labs Ani Gaussian Splatting Component  
**类别** MLSLabsRenderer

#### Get Frame Index

##### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| float | Frame Index | 当前帧。 |

#### Set Frame Index

##### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| float | Frame Index | 新的帧。与当前值相同时不切帧。 |

##### 输出

此节点没有数据输出。

### Frame Count

只读整数，默认 1。`.mlslabs` 加载完成后，变为时长（秒）乘以 30 后截断成的整数。

**目标是** MLS Labs Ani Gaussian Splatting Component  
**类别** MLSLabsRenderer

#### Get Frame Count

##### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| integer | Frame Count | 按每秒 30 帧从片段时长换算出的帧数。 |

### Update Frame Index

把 `.mlslabs` 片段跳到指定帧。不会开始或停止播放。

**目标是** MLS Labs Ani Gaussian Splatting Component  
**类别** MLSLabsRenderer

索引超出 `[0, Frame Count)`、组件失效、节点未加载或组件未注册时不做任何事。索引有效时会写入 **Frame Index**，并跳到 `索引 / 30` 秒。

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| integer | In Index | 目标帧索引。 |

#### 输出

此节点没有数据输出。

---

## Animatable Gaussian Splatting Actor

帧序列高斯溅射 Actor。可在蓝图中作为类型使用，也可被蓝图继承。根组件是 **Animatable Gaussian Splatting Component**。

本 Actor 没有播放、停止或暂停节点。把 **Splat Data Path** 设为帧文件所在目录，再在组件上切换帧。

### Splatting Component

只读变量。拖出 Actor 引用后使用 **Get Splatting Component**。

**目标是** Animatable Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| Animatable Gaussian Splatting Component 对象引用 | Splatting Component | 作为根组件创建的帧序列组件。 |

---

## Animatable Gaussian Splatting Component

可添加到蓝图 Actor 上的帧序列组件。**Splat Data Path** 继承自 **Gaussian Splatting Component**。在本类上它是帧文件目录，不是单个文件。

原生加载结束后，**Frame Count** 变为已加载的帧数。组件接着写入自己的变换，并在 **Frame Index** 落在范围内时显示该帧。

写入 **Frame Index** 会走 **Set Frame Index**。蓝图里没有同名的独立函数节点。本组件没有播放、停止、暂停或播放状态节点。

### Frame Index

可读写浮点，默认 0，可做插值轨道。蓝图或 Sequencer 写入时调用 **Set Frame Index**。

显示的帧是把该值截断为整数后的结果。只有索引落在 `[0, Frame Count)`、节点已加载且组件已注册时才会切帧。

**目标是** Animatable Gaussian Splatting Component  
**类别** MLSLabsRenderer

#### Get Frame Index

##### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| float | Frame Index | 当前帧。 |

#### Set Frame Index

##### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| float | Frame Index | 新的帧。与当前值相同时不切帧。 |

##### 输出

此节点没有数据输出。

### Frame Count

只读整数，默认 1。帧目录加载成功后，变为原生加载器报告的帧数。

**目标是** Animatable Gaussian Splatting Component  
**类别** MLSLabsRenderer

#### Get Frame Count

##### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| integer | Frame Count | 已加载的帧数。 |

### Update Frame Index

把序列切到指定帧。

**目标是** Animatable Gaussian Splatting Component  
**类别** MLSLabsRenderer

索引超出 `[0, Frame Count)`、组件失效、节点未加载或组件未注册时不做任何事。

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| integer | In Index | 目标帧索引。 |

#### 输出

此节点没有数据输出。

---

## Misc Helper Library

静态蓝图函数库。右键菜单路径为 **Misc Helper > Core**。节点没有 Target 引脚。

读写的文件是启动目录下的 `Saved/Config/UserSetting.ini`。写入前会创建目录和文件，并在写入后立刻刷到磁盘。`GConfig` 不可用时返回 false。读取时，键不存在也返回 false。

`section` 与 `key` 由调用方指定，八个节点共用这一个 ini 文件。

### Set Config Boolean

**类别** MiscHelper\|Core

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| string | Section | ini 节名。 |
| string | Key | 键名。 |
| boolean | Value | 要写入的布尔值。 |

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 写入并刷新成功时为 true。 |

### Set Config Integer

**类别** MiscHelper\|Core

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| string | Section | ini 节名。 |
| string | Key | 键名。 |
| integer | Value | 要写入的整数。 |

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 写入并刷新成功时为 true。 |

### Set Config Float

**类别** MiscHelper\|Core

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| string | Section | ini 节名。 |
| string | Key | 键名。 |
| float | Value | 要写入的浮点数。 |

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 写入并刷新成功时为 true。 |

### Set Config String

**类别** MiscHelper\|Core

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| string | Section | ini 节名。 |
| string | Key | 键名。 |
| string | Value | 要写入的字符串。 |

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 写入并刷新成功时为 true。 |

### Get Config Boolean

**类别** MiscHelper\|Core

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| string | Section | ini 节名。 |
| string | Key | 键名。 |

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 读到该键时为 true。 |
| boolean | Value | 读到的布尔值。键不存在时保持调用前的值。 |

### Get Config Integer

**类别** MiscHelper\|Core

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| string | Section | ini 节名。 |
| string | Key | 键名。 |

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 读到该键时为 true。 |
| integer | Value | 读到的整数。键不存在时保持调用前的值。 |

### Get Config Float

**类别** MiscHelper\|Core

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| string | Section | ini 节名。 |
| string | Key | 键名。 |

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 读到该键时为 true。 |
| float | Value | 读到的浮点数。键不存在时保持调用前的值。 |

### Get Config String

**类别** MiscHelper\|Core

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| string | Section | ini 节名。 |
| string | Key | 键名。 |

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 读到该键时为 true。 |
| string | Value | 读到的字符串。键不存在时保持调用前的值。 |
