# MLSLabs Renderer Blueprint API

English | [中文](./BlueprintAPI_CN.md)

This page lists the types, variables, event dispatchers, and function nodes that the `MLSLabsRenderer` plugin exposes to Blueprints.

## Contents

- [Types](#types)
- [Gaussian Splatting Actor](#gaussian-splatting-actor)
- [Gaussian Splatting Component](#gaussian-splatting-component)
- [MLS Labs Ani Gaussian Splatting Actor](#mls-labs-ani-gaussian-splatting-actor)
- [MLS Labs Ani Gaussian Splatting Component](#mls-labs-ani-gaussian-splatting-component)
- [Animatable Gaussian Splatting Actor](#animatable-gaussian-splatting-actor)
- [Animatable Gaussian Splatting Component](#animatable-gaussian-splatting-component)
- [MLS Labs Renderer Subsystem](#mls-labs-renderer-subsystem)
- [Gaussian Splating Renderer Library](#gaussian-splating-renderer-library)
- [Misc Helper Library](#misc-helper-library)

## Which Class to Use

| Blueprint class | Data | How to play it in a Blueprint |
| --- | --- | --- |
| Gaussian Splatting Actor | A single static `.ply` or `.sog` | After **Splat Data Path** is set, the component loads the file itself. There is no playback node. |
| MLS Labs Ani Gaussian Splatting Actor | A single `.mlslabs` | Call **Play**, **Stop**, **Pause**, and **Seek to Frame** on the Actor. |
| Animatable Gaussian Splatting Actor | A `.ply` or `.sog` frame sequence in one directory | Same as above. **Frame Index**, **Playback Fps**, and **Frame Count** can also be read and written. |

Nodes of the same name on the component behave the same as the corresponding Actor nodes. Actor nodes forward to the **Splatting Component** on the root component.

---

## Types

### Mlslabs Playback State

**EMlslabs Playback State**

Playback state for `.mlslabs` and frame sequences. It can be used as a variable type, and as a parameter of **On Playback State Changed**.

| Value | Display Name | Description |
| --- | --- | --- |
| Started | Started | Broadcast once after a **Play** starts. |
| Playing | Playing | Broadcast about once every 0.5 seconds during playback. |
| Ended | Ended | Kept in the enum. The current playback clock does not broadcast this value. |

### Three D Gaussians Data

**Three D Gaussians Data**

Blueprint struct for a static splat asset. **Make Three D Gaussians Data**, **Break Three D Gaussians Data**, and **Set Members in Three D Gaussians Data** are available.

| Type | Name | Description |
| --- | --- | --- |
| string | Splat File Name | Splat file name. Defaults to an empty string. |

### Three D Gaussians Animation

**Three D Gaussians Animation**

Blueprint struct for a frame-sequence splat asset. **Make**, **Break**, and **Set Members** nodes are available.

| Type | Name | Description |
| --- | --- | --- |
| string array | Splat Files | Frame files in the sequence. |
| string | Splat File Dir Name | Directory name of the frame files. Defaults to an empty string. |
| integer | Frame Num | Frame count. Defaults to 0. |

---

## Gaussian Splatting Actor

Static 3D Gaussian splatting Actor. It can be used as a type in Blueprints, and a Blueprint can inherit from it. The root component is a **Gaussian Splatting Component**.

After you place it, set **Splat Data Path** on the component to the path of a static `.ply` or `.sog`. The component loads the file automatically when it can own a splat node.

### Splatting Component

Read-only variable. Drag off an Actor reference and use **Get Splatting Component**.

**Target is** Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| Gaussian Splatting Component object reference | Splatting Component | The static splat component created as the root component. |

---

## Gaussian Splatting Component

Static splat component that can be added to a Blueprint Actor.

The subclasses **MLS Labs Ani Gaussian Splatting Component** and **Animatable Gaussian Splatting Component** inherit **Splat Data Path** from this component. The subclass defines what the path means.

### Splat Data Path

Read/write variable. On this class it is the path of a static `.ply` or `.sog` file. An empty path loads nothing. Changing this property in the editor reloads the asset.

**Target is** Gaussian Splatting Component  
**Category** MLSLabsRenderer

#### Get Splat Data Path

##### Outputs

| Type | Name | Description |
| --- | --- | --- |
| string | Splat Data Path | The current splat data path. |

#### Set Splat Data Path

##### Inputs

| Type | Name | Description |
| --- | --- | --- |
| string | Splat Data Path | Path of the static `.ply` or `.sog` to load. |

##### Outputs

This node has no data outputs.

---

## MLS Labs Ani Gaussian Splatting Actor

`.mlslabs` 4D Gaussian splatting Actor. It can be used as a type in Blueprints, and a Blueprint can inherit from it. The root component is an **MLS Labs Ani Gaussian Splatting Component**.

Set **Splat Data Path** to the path of a `.mlslabs` file. After a successful load, **Can Play** becomes true. If **Play** is called before loading finishes, playback is deferred until the load succeeds.

### Splatting Component

**Target is** MLS Labs Ani Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| MLS Labs Ani Gaussian Splatting Component object reference | Splatting Component | The `.mlslabs` playback component created as the root component. |

### On Playback State Changed

Event dispatcher. The component forwards native playback state to this dispatcher on the game thread. On the Actor you can use **Assign**, **Bind**, or **Call**.

**Target is** MLS Labs Ani Gaussian Splatting Actor  
**Category** MLSLabsRenderer

One **Play** receives **Started** first, then **Playing** about every 0.5 seconds. **Ended** is not currently broadcast.

#### Event outputs

An event bound to this dispatcher has the following outputs.

| Type | Name | Description |
| --- | --- | --- |
| EMlslabs Playback State | Playback State | The current playback state. |

#### Call inputs

Data inputs of **Call On Playback State Changed**.

| Type | Name | Description |
| --- | --- | --- |
| EMlslabs Playback State | Playback State | The state to broadcast to bound events. |

### Play

Starts playback of the loaded `.mlslabs`. If the splat node has not finished loading, the play request is recorded and playback starts automatically after the load succeeds.

**Target is** MLS Labs Ani Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Stop

Stops playback and cancels a deferred play request that has not run yet. Does nothing when the splat node is not yet loaded.

**Target is** MLS Labs Ani Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Pause

Pauses playback and cancels a deferred play request that has not run yet. Does nothing when the splat node is not yet loaded.

**Target is** MLS Labs Ani Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Can Play

Whether the `.mlslabs` has finished loading and can be played.

**Target is** MLS Labs Ani Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true after a successful load. false when the component does not exist. |

### Seek to Frame

Seeks playback to the specified frame.

**Target is** MLS Labs Ani Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| integer | Frame Index | Target frame index. |

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true when the splat node is loaded and native playback accepts the frame. false when the component does not exist or has not loaded yet. |

---

## MLS Labs Ani Gaussian Splatting Component

`.mlslabs` playback component that can be added to a Blueprint Actor. **Play**, **Stop**, **Pause**, **Can Play**, and **Seek to Frame** on the Actor all forward to this component.

**Splat Data Path** is inherited from **Gaussian Splatting Component**. On this class it is a `.mlslabs` file path, not a static `.ply`.

If the owner is an **MLS Labs Ani Gaussian Splatting Actor**, playback state is broadcast to the Actor's **On Playback State Changed**.

### Play

**Target is** MLS Labs Ani Gaussian Splatting Component  
**Category** MLSLabsRenderer

Starts playback. Returns immediately when the component is invalid. When the hash is still 0 (common when loading has not finished at BeginPlay), the request is recorded and **Play** runs automatically after loading finishes.

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Stop

**Target is** MLS Labs Ani Gaussian Splatting Component  
**Category** MLSLabsRenderer

Stops playback and clears the deferred play request. Returns immediately when the component is invalid or has not loaded yet.

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Pause

**Target is** MLS Labs Ani Gaussian Splatting Component  
**Category** MLSLabsRenderer

Pauses playback and clears the deferred play request. Returns immediately when the component is invalid or has not loaded yet.

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Can Play

**Target is** MLS Labs Ani Gaussian Splatting Component  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true after the `.mlslabs` loads successfully. Otherwise false. |

### Seek to Frame

**Target is** MLS Labs Ani Gaussian Splatting Component  
**Category** MLSLabsRenderer

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| integer | Frame Index | Target frame index. |

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true when the component is valid, the splat node is loaded, and the seek succeeds. |

---

## Animatable Gaussian Splatting Actor

`.ply` / `.sog` frame-sequence Actor. It can be used as a type in Blueprints, and a Blueprint can inherit from it. The root component is an **Animatable Gaussian Splatting Component**.

Set **Splat Data Path** to the directory that contains the frame files. Every frame in the directory must use the same extension, and that extension must be `.ply` or `.sog`.

Playback loops at an integer frame rate. Native playback uses the same clock as `.mlslabs`. A **Play** call made before loading finishes is deferred until the load succeeds.

### Splatting Component

**Target is** Animatable Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| Animatable Gaussian Splatting Component object reference | Splatting Component | The frame-sequence component created as the root component. |

### On Playback State Changed

Event dispatcher. Its signature matches the dispatcher of the same name on **MLS Labs Ani Gaussian Splatting Actor**.

**Target is** Animatable Gaussian Splatting Actor  
**Category** MLSLabsRenderer

A native sequence is driven by player callbacks. The non-native fallback clock is driven in the component Tick: each **Play** broadcasts **Started** once, then **Playing** about every 0.5 seconds. Looping playback does not broadcast **Ended**.

#### Event outputs

| Type | Name | Description |
| --- | --- | --- |
| EMlslabs Playback State | Playback State | The current playback state. |

#### Call inputs

| Type | Name | Description |
| --- | --- | --- |
| EMlslabs Playback State | Playback State | The state to broadcast to bound events. |

### Play

Starts looping playback from the current frame. If loading has not finished, playback is deferred until it can play.

**Target is** Animatable Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Stop

Stops playback and returns to frame 0. If loading has not finished, it only cancels the deferred play request.

**Target is** Animatable Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Pause

Pauses on the current frame. If loading has not finished, it only cancels the deferred play request.

**Target is** Animatable Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Can Play

Whether the frame sequence has finished loading and can be played.

**Target is** Animatable Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true after a successful load. false when the component does not exist. |

### Seek to Frame

Seeks to the specified frame and updates **Frame Index**. The index must fall in `[0, Frame Count)`.

**Target is** Animatable Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| integer | Frame Index | Target frame index. |

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true when the splat node is loaded and the index is valid. false when the component does not exist. |

---

## Animatable Gaussian Splatting Component

Frame-sequence component that can be added to a Blueprint Actor. **Splat Data Path** is inherited from **Gaussian Splatting Component**. On this class it is a frame directory, not a single file.

The sequence reads frame headers and decodes frame 0 on a background thread. After loading finishes, **Frame Count** is updated to the actual frame count and **Can Play** becomes true. The splat node starts hidden, then is shown according to visibility after the component has written its transform.

Assignments to **Frame Index** and **Playback Fps** go through the setters below. Blueprint does not expose separate function nodes with those names.

If the owner is an **Animatable Gaussian Splatting Actor**, state changes are broadcast to that Actor's **On Playback State Changed**.

### Frame Index

Read/write float variable. Defaults to 0. It can be used as an interpolation track. Writes from a Blueprint or Sequencer call **Set Frame Index**.

The displayed frame is this value truncated to an integer. The frame changes only when the index falls in `[0, Frame Count)`, the splat node is loaded, and the component is registered. Changing the frame also moves the internal clock to the time that corresponds to that frame.

**Target is** Animatable Gaussian Splatting Component  
**Category** MLSLabsRenderer

#### Get Frame Index

##### Outputs

| Type | Name | Description |
| --- | --- | --- |
| float | Frame Index | The current frame. Updated by the clock during playback. |

#### Set Frame Index

##### Inputs

| Type | Name | Description |
| --- | --- | --- |
| float | Frame Index | The new frame. If it equals the current value, the frame is not changed. |

##### Outputs

This node has no data outputs.

### Frame Count

Read-only integer. Defaults to 1. After the sequence loads successfully, it becomes the actual frame count, and is at least 1.

**Target is** Animatable Gaussian Splatting Component  
**Category** MLSLabsRenderer

#### Get Frame Count

##### Outputs

| Type | Name | Description |
| --- | --- | --- |
| integer | Frame Count | Number of loaded frames. |

### Playback Fps

Read/write float. Defaults to 30. The Details panel minimum is 1. Writes call **Set Playback Fps**, and values below 1 are raised to 1. The frame rate actually used for playback is this value rounded to an integer, the same way the frame rate in a `.mlslabs` file header is used.

**Target is** Animatable Gaussian Splatting Component  
**Category** MLSLabsRenderer

#### Get Playback Fps

##### Outputs

| Type | Name | Description |
| --- | --- | --- |
| float | Playback Fps | The current playback frame rate. |

#### Set Playback Fps

##### Inputs

| Type | Name | Description |
| --- | --- | --- |
| float | Playback Fps | The new frame rate. The minimum is 1. |

##### Outputs

This node has no data outputs.

A native sequence passes the frame rate to the player. Otherwise, the internal clock is recomputed from the current frame using the new integer frame rate.

### Update Frame Index

Switches the sequence to the specified frame. It does not change the playing or paused state.

**Target is** Animatable Gaussian Splatting Component  
**Category** MLSLabsRenderer

Does nothing when the index is outside `[0, Frame Count)`, the component is invalid, the splat node is not loaded, or the component is not registered.

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| integer | In Index | Target frame index. |

#### Outputs

This node has no data outputs.

### Play

**Target is** Animatable Gaussian Splatting Component  
**Category** MLSLabsRenderer

Returns immediately when the component is invalid. If the splat node is not loaded or cannot play yet, the request is recorded and playback starts automatically after loading finishes.

A native sequence is handed to the same player used for `.mlslabs`. Other sequences enable component Tick, loop at an integer frame rate, and broadcast **Started** once from this **Play**. Calling it again while Tick playback is already running does not restart playback.

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Stop

**Target is** Animatable Gaussian Splatting Component  
**Category** MLSLabsRenderer

Clears the deferred play request. Returns immediately when the component is invalid or has not loaded yet.

After a native sequence stops, **Frame Index** is set to 0. Other sequences stop Tick and switch back to frame 0.

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Pause

**Target is** Animatable Gaussian Splatting Component  
**Category** MLSLabsRenderer

Clears the deferred play request. Returns immediately when the component is invalid or has not loaded yet.

A native sequence pauses at the current time. Other sequences stop Tick and stay on the current frame.

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Can Play

**Target is** Animatable Gaussian Splatting Component  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true after the frame sequence loads successfully. It becomes false first when a new load starts. |

### Seek to Frame

**Target is** Animatable Gaussian Splatting Component  
**Category** MLSLabsRenderer

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| integer | In Frame Index | Target frame index. It must fall in `[0, Frame Count)`. |

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true when the component is valid, the splat node is loaded, and the index is in range. The sequence also switches to that frame. |

### Is Playing

Whether playback is currently running. This is a call node with execution pins.

**Target is** Animatable Gaussian Splatting Component  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | false when the splat node is not loaded. A native sequence queries the player. Other sequences return true while the Tick clock is running. |

---

## Misc Helper Library

Static Blueprint function library. The right-click menu path is **Misc Helper > Core**. The nodes have no Target pin.

The file they read and write is `Saved/Config/UserSetting.ini` under the launch directory. The directory and file are created before a write, and the file is flushed to disk immediately afterward. They return false when `GConfig` is unavailable. On read, a missing key also returns false.

The caller specifies `section` and `key`. All eight nodes share this one ini file.

### Set Config Boolean

**Category** MiscHelper\|Core

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| string | Section | ini section name. |
| string | Key | Key name. |
| boolean | Value | Boolean value to write. |

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true when the write and flush succeed. |

### Set Config Integer

**Category** MiscHelper\|Core

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| string | Section | ini section name. |
| string | Key | Key name. |
| integer | Value | Integer value to write. |

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true when the write and flush succeed. |

### Set Config Float

**Category** MiscHelper\|Core

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| string | Section | ini section name. |
| string | Key | Key name. |
| float | Value | Float value to write. |

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true when the write and flush succeed. |

### Set Config String

**Category** MiscHelper\|Core

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| string | Section | ini section name. |
| string | Key | Key name. |
| string | Value | String value to write. |

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true when the write and flush succeed. |

### Get Config Boolean

**Category** MiscHelper\|Core

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| string | Section | ini section name. |
| string | Key | Key name. |

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true when the key is read. |
| boolean | Value | The boolean value that was read. If the key is missing, it keeps the value it had before the call. |

### Get Config Integer

**Category** MiscHelper\|Core

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| string | Section | ini section name. |
| string | Key | Key name. |

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true when the key is read. |
| integer | Value | The integer that was read. If the key is missing, it keeps the value it had before the call. |

### Get Config Float

**Category** MiscHelper\|Core

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| string | Section | ini section name. |
| string | Key | Key name. |

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true when the key is read. |
| float | Value | The float that was read. If the key is missing, it keeps the value it had before the call. |

### Get Config String

**Category** MiscHelper\|Core

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| string | Section | ini section name. |
| string | Key | Key name. |

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true when the key is read. |
| string | Value | The string that was read. If the key is missing, it keeps the value it had before the call. |
