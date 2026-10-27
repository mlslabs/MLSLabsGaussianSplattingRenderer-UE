# MLSLabs Renderer 蓝图 API

[English](./BlueprintAPI.md) | 中文

本页列出 `MLSLabsRenderer` 插件导出到蓝图的类型、变量、事件调度器和函数节点。

## 目录

- [类型](#类型)
- [Gaussian Splatting Actor](#gaussian-splatting-actor)
- [Gaussian Splatting Component](#gaussian-splatting-component)
- [MLS Labs Ani Gaussian Splatting Actor](#mls-labs-ani-gaussian-splatting-actor)
- [MLS Labs Ani Gaussian Splatting Component](#mls-labs-ani-gaussian-splatting-component)
- [Animatable Gaussian Splatting Actor](#animatable-gaussian-splatting-actor)
- [Animatable Gaussian Splatting Component](#animatable-gaussian-splatting-component)
- [Misc Helper Library](#misc-helper-library)

## 选用哪个类

| 蓝图类 | 数据 | 蓝图里怎么播 |
| --- | --- | --- |
| Gaussian Splatting Actor | 单个静态 `.ply` 或 `.sog` | 设置 **Splat Data Path** 后由组件自行加载，没有播放节点 |
| MLS Labs Ani Gaussian Splatting Actor | 单个 `.mlslabs` | 对 Actor 调用 **Play**、**Stop**、**Pause**、**Seek to Frame** |
| Animatable Gaussian Splatting Actor | 一个目录下的 `.ply` 或 `.sog` 帧序列 | 同上，并可读写 **Frame Index**、**Playback Fps**、**Frame Count** |

组件上的同名节点与对应 Actor 节点行为一致。Actor 节点会转发给根组件上的 **Splatting Component**。

---

## 类型

### Mlslabs Playback State

**EMlslabs Playback State**

`.mlslabs` 与帧序列播放状态。可作为变量类型，也可作为 **On Playback State Changed** 的参数。

| 值 | 显示名 | 说明 |
| --- | --- | --- |
| Started | Started | 一次 **Play** 开始后发出一次。 |
| Playing | Playing | 播放过程中约每 0.5 秒发出一次。 |
| Ended | Ended | 枚举中保留。当前播放时钟不会广播此值。 |

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

放置后把组件上的 **Splat Data Path** 设为静态 `.ply` 或 `.sog` 的路径，组件会在可以拥有溅射节点时自动加载。

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

可读写变量。在本类上表示静态 `.ply` 或 `.sog` 文件路径。路径为空时不加载。编辑器中修改该属性会重新加载。

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
| string | Splat Data Path | 要加载的静态 `.ply` 或 `.sog` 路径。 |

##### 输出

此节点没有数据输出。

---

## MLS Labs Ani Gaussian Splatting Actor

`.mlslabs` 四维高斯溅射 Actor。可在蓝图中作为类型使用，也可被蓝图继承。根组件是 **MLS Labs Ani Gaussian Splatting Component**。

把 **Splat Data Path** 设为 `.mlslabs` 文件路径。加载成功后 **Can Play** 变为 true。若在加载完成前调用 **Play**，播放会延后到加载成功之后。

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

一次 **Play** 会先收到 **Started**，之后约每 0.5 秒收到 **Playing**。**Ended** 目前不会被广播。

#### 事件输出

绑定到该调度器的事件具有以下输出。

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| EMlslabs Playback State | Playback State | 当前播放状态。 |

#### 调用输入

**Call On Playback State Changed** 的数据输入。

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| EMlslabs Playback State | Playback State | 要广播给已绑定事件的状态。 |

### Play

开始播放已加载的 `.mlslabs`。若节点尚未加载完成，则记下播放请求，加载成功后自动开始。

**目标是** MLS Labs Ani Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Stop

停止播放，并取消尚未执行的延迟播放请求。节点尚未加载时不做任何事。

**目标是** MLS Labs Ani Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Pause

暂停播放，并取消尚未执行的延迟播放请求。节点尚未加载时不做任何事。

**目标是** MLS Labs Ani Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Can Play

`.mlslabs` 是否已经加载完成、可以播放。

**目标是** MLS Labs Ani Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 加载成功后为 true。组件不存在时为 false。 |

### Seek to Frame

把播放跳到指定帧。

**目标是** MLS Labs Ani Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| integer | Frame Index | 目标帧索引。 |

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 节点已加载且原生播放接受该帧时为 true。组件不存在或尚未加载时为 false。 |

---

## MLS Labs Ani Gaussian Splatting Component

可添加到蓝图 Actor 上的 `.mlslabs` 播放组件。Actor 上的 **Play**、**Stop**、**Pause**、**Can Play**、**Seek to Frame** 都转发到本组件。

**Splat Data Path** 继承自 **Gaussian Splatting Component**。在本类上它是 `.mlslabs` 文件路径，而不是静态 `.ply`。

若拥有者是 **MLS Labs Ani Gaussian Splatting Actor**，播放状态会广播到 Actor 的 **On Playback State Changed**。

### Play

**目标是** MLS Labs Ani Gaussian Splatting Component  
**类别** MLSLabsRenderer

开始播放。组件已失效时直接返回。哈希仍为 0（常见于 BeginPlay 时加载尚未结束）时记下请求，加载完成后自动 **Play**。

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Stop

**目标是** MLS Labs Ani Gaussian Splatting Component  
**类别** MLSLabsRenderer

停止播放并清除延迟播放请求。组件失效或尚未加载时直接返回。

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Pause

**目标是** MLS Labs Ani Gaussian Splatting Component  
**类别** MLSLabsRenderer

暂停播放并清除延迟播放请求。组件失效或尚未加载时直接返回。

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

### Seek to Frame

**目标是** MLS Labs Ani Gaussian Splatting Component  
**类别** MLSLabsRenderer

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| integer | Frame Index | 目标帧索引。 |

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 组件有效、节点已加载且跳帧成功时为 true。 |

---

## Animatable Gaussian Splatting Actor

`.ply` / `.sog` 帧序列 Actor。可在蓝图中作为类型使用，也可被蓝图继承。根组件是 **Animatable Gaussian Splatting Component**。

把 **Splat Data Path** 设为帧文件所在目录。目录中的帧扩展名必须一致，且只能是 `.ply` 或 `.sog`。

播放在整数帧率下循环。原生播放与 `.mlslabs` 使用同一套时钟。加载完成前调用 **Play** 会延后到加载成功之后。

### Splatting Component

**目标是** Animatable Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| Animatable Gaussian Splatting Component 对象引用 | Splatting Component | 作为根组件创建的帧序列组件。 |

### On Playback State Changed

事件调度器。签名与 **MLS Labs Ani Gaussian Splatting Actor** 上的同名调度器相同。

**目标是** Animatable Gaussian Splatting Actor  
**类别** MLSLabsRenderer

原生序列由播放器回调驱动。非原生回退时钟在组件 Tick 中驱动：每次 **Play** 广播一次 **Started**，之后约每 0.5 秒广播 **Playing**。循环播放不会广播 **Ended**。

#### 事件输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| EMlslabs Playback State | Playback State | 当前播放状态。 |

#### 调用输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| EMlslabs Playback State | Playback State | 要广播给已绑定事件的状态。 |

### Play

从当前帧开始循环播放。加载未完成时延迟到可以播放之后。

**目标是** Animatable Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Stop

停止播放并回到第 0 帧。加载未完成时只取消延迟播放请求。

**目标是** Animatable Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Pause

暂停在当前帧。加载未完成时只取消延迟播放请求。

**目标是** Animatable Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Can Play

帧序列是否已经加载完成、可以播放。

**目标是** Animatable Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 加载成功后为 true。组件不存在时为 false。 |

### Seek to Frame

跳到指定帧并更新 **Frame Index**。索引必须落在 `[0, Frame Count)`。

**目标是** Animatable Gaussian Splatting Actor  
**类别** MLSLabsRenderer

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| integer | Frame Index | 目标帧索引。 |

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 节点已加载且索引有效时为 true。组件不存在时为 false。 |

---

## Animatable Gaussian Splatting Component

可添加到蓝图 Actor 上的帧序列组件。**Splat Data Path** 继承自 **Gaussian Splatting Component**，在本类上表示帧目录，而不是单个文件。

序列在后台线程读取帧头并解码第 0 帧。加载完成后 **Frame Count** 更新为实际帧数，**Can Play** 变为 true。节点先隐藏，组件写完变换后再按可见性显示。

**Frame Index** 与 **Playback Fps** 的赋值会走下方 Setter，蓝图里没有同名的独立函数节点。

若拥有者是 **Animatable Gaussian Splatting Actor**，状态变化会广播到该 Actor 的 **On Playback State Changed**。

### Frame Index

可读写浮点变量，默认 0，可做插值轨道。蓝图或 Sequencer 写入时调用 **Set Frame Index**。

显示的帧是把该值截断为整数后的结果。只有索引落在 `[0, Frame Count)` 且节点已加载、组件已注册时才会切帧。切帧同时把内部时钟改到该帧对应的时间。

**目标是** Animatable Gaussian Splatting Component  
**类别** MLSLabsRenderer

#### Get Frame Index

##### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| float | Frame Index | 当前帧。播放过程中由时钟更新。 |

#### Set Frame Index

##### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| float | Frame Index | 新的帧。与当前值相同时不切帧。 |

##### 输出

此节点没有数据输出。

### Frame Count

只读整数，默认 1。序列加载成功后改为实际帧数，至少为 1。

**目标是** Animatable Gaussian Splatting Component  
**类别** MLSLabsRenderer

#### Get Frame Count

##### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| integer | Frame Count | 已加载的帧数。 |

### Playback Fps

可读写浮点，默认 30。细节面板最小值为 1。写入时调用 **Set Playback Fps**，小于 1 的值会被抬到 1。实际播放帧率是该值四舍五入后的整数，与 `.mlslabs` 文件头中的帧率用法相同。

**目标是** Animatable Gaussian Splatting Component  
**类别** MLSLabsRenderer

#### Get Playback Fps

##### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| float | Playback Fps | 当前播放帧率。 |

#### Set Playback Fps

##### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| float | Playback Fps | 新的帧率，最小为 1。 |

##### 输出

此节点没有数据输出。

原生序列会把帧率交给播放器。其余情况下按新的整数帧率，用当前帧重算内部时钟。

### Update Frame Index

把序列切到指定帧。不改变播放或暂停状态。

**目标是** Animatable Gaussian Splatting Component  
**类别** MLSLabsRenderer

索引超出 `[0, Frame Count)`、组件失效、节点未加载或组件未注册时不做任何事。

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| integer | In Index | 目标帧索引。 |

#### 输出

此节点没有数据输出。

### Play

**目标是** Animatable Gaussian Splatting Component  
**类别** MLSLabsRenderer

组件失效时直接返回。节点未加载或尚不能播放时记下请求，加载完成后自动播放。

原生序列交给与 `.mlslabs` 相同的播放器。其余序列启用组件 Tick，按整数帧率循环，并从本次 **Play** 起广播一次 **Started**。已经在用 Tick 播放时再次调用不会重新开始。

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Stop

**目标是** Animatable Gaussian Splatting Component  
**类别** MLSLabsRenderer

清除延迟播放请求。组件失效或尚未加载时直接返回。

原生序列停止后把 **Frame Index** 置为 0。其余序列停止 Tick，并切回第 0 帧。

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Pause

**目标是** Animatable Gaussian Splatting Component  
**类别** MLSLabsRenderer

清除延迟播放请求。组件失效或尚未加载时直接返回。

原生序列暂停在当前时间。其余序列停止 Tick，停留在当前帧。

#### 输入

此节点没有数据输入。

#### 输出

此节点没有数据输出。

### Can Play

**目标是** Animatable Gaussian Splatting Component  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 帧序列加载成功后为 true。新的加载开始时会先变为 false。 |

### Seek to Frame

**目标是** Animatable Gaussian Splatting Component  
**类别** MLSLabsRenderer

#### 输入

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| integer | In Frame Index | 目标帧索引，必须落在 `[0, Frame Count)`。 |

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 组件有效、节点已加载且索引在范围内时为 true，并切到该帧。 |

### Is Playing

当前是否处于播放中。这是带执行引脚的调用节点。

**目标是** Animatable Gaussian Splatting Component  
**类别** MLSLabsRenderer

#### 输入

此节点没有数据输入。

#### 输出

| 类型 | 名称 | 说明 |
| --- | --- | --- |
| boolean | Return Value | 节点未加载时为 false。原生序列查询播放器；其余序列在 Tick 时钟运行时为 true。 |

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
