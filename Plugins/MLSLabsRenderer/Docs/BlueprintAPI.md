# MLSLabs Renderer Blueprint API

English | [中文](./BlueprintAPI_CN.md)

This page lists the types, variables, event dispatchers, and function nodes that the `MLSLabsRenderer` plugin exposes to Blueprints.

These functions are call nodes with execution pins. The input and output tables list data pins only.

## Contents

- [Types](#types)
- [Gaussian Splatting Actor](#gaussian-splatting-actor)
- [Gaussian Splatting Component](#gaussian-splatting-component)
- [MLS Labs Ani Gaussian Splatting Actor](#mls-labs-ani-gaussian-splatting-actor)
- [MLS Labs Ani Gaussian Splatting Component](#mls-labs-ani-gaussian-splatting-component)
- [Animatable Gaussian Splatting Actor](#animatable-gaussian-splatting-actor)
- [Animatable Gaussian Splatting Component](#animatable-gaussian-splatting-component)
- [Misc Helper Library](#misc-helper-library)

## Which Class to Use

| Blueprint class | Data | How to use it in a Blueprint |
| --- | --- | --- |
| Gaussian Splatting Actor | One static splat file | Set **Splat Data Path**. The component loads the file. There is no playback node. |
| MLS Labs Ani Gaussian Splatting Actor | One `.mlslabs` file | Call **Play**, **Stop**, **Pause**, and **Can Play** on the Actor. Scrub with **Frame Index** on the component. |
| Animatable Gaussian Splatting Actor | A directory of splat frames | There is no playback node. Set **Frame Index** or call **Update Frame Index** on the component. |

---

## Types

### Mlslabs Playback State

**EMlslabs Playback State**

Playback state reported by the native `.mlslabs` player. It can be used as a variable type, and as the parameter of **On Playback State Changed**.

| Value | Display Name | Description |
| --- | --- | --- |
| Started | Started | Playback has started. |
| Playing | Playing | Playback is in progress. |
| Ended | Ended | Playback has ended. |

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

After you place it, set **Splat Data Path** on the component. The component passes that path to the native renderer and loads the file when the component can own a splat node.

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

Read/write variable. On this class it is the path of a static splat file. An empty path does not start a load. Changing this property in the editor loads the new path and replaces the previous splat node.

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
| string | Splat Data Path | Path of the static splat file to load. |

##### Outputs

This node has no data outputs.

---

## MLS Labs Ani Gaussian Splatting Actor

`.mlslabs` 4D Gaussian splatting Actor. It can be used as a type in Blueprints, and a Blueprint can inherit from it. The root component is an **MLS Labs Ani Gaussian Splatting Component**.

Set **Splat Data Path** to a `.mlslabs` file. After a successful load, **Can Play** becomes true. **Play**, **Stop**, and **Pause** do nothing until that load has finished. There is no deferred play request.

Frame scrubbing is on the component, not on this Actor. **Frame Count** is the clip duration in seconds multiplied by 30, truncated to an integer. **Frame Index** seeks with `time = frame / 30`.

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

The owner must be this Actor. The forwarded value is clamped to **Started**, **Playing**, or **Ended**.

#### Event outputs

An event bound to this dispatcher has the following outputs.

| Type | Name | Description |
| --- | --- | --- |
| EMlslabs Playback State | Playback State | The playback state reported by the native player. |

#### Call inputs

Data inputs of **Call On Playback State Changed**.

| Type | Name | Description |
| --- | --- | --- |
| EMlslabs Playback State | Playback State | The state to broadcast to bound events. |

### Play

Starts playback of the loaded `.mlslabs`. Does nothing when the component is missing or the splat node is not loaded yet.

**Target is** MLS Labs Ani Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Stop

Stops playback. Does nothing when the component is missing or the splat node is not loaded yet.

**Target is** MLS Labs Ani Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Pause

Pauses playback. Does nothing when the component is missing or the splat node is not loaded yet.

**Target is** MLS Labs Ani Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Can Play

Whether the `.mlslabs` file has finished loading and can be played.

**Target is** MLS Labs Ani Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Inputs

This node has no data inputs.

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| boolean | Return Value | true after a successful load. false when the component does not exist or the file has not loaded. |

---

## MLS Labs Ani Gaussian Splatting Component

`.mlslabs` playback component that can be added to a Blueprint Actor. **Play**, **Stop**, **Pause**, and **Can Play** on the Actor forward to this component.

**Splat Data Path** is inherited from **Gaussian Splatting Component**. On this class it is a `.mlslabs` file path, not a static splat file.

If the owner is an **MLS Labs Ani Gaussian Splatting Actor**, playback state is broadcast to that Actor's **On Playback State Changed**.

**Frame Index** is written through **Set Frame Index**. Blueprint does not expose a separate function node with that name.

### Play

**Target is** MLS Labs Ani Gaussian Splatting Component  
**Category** MLSLabsRenderer

Returns immediately when the component is invalid or the splat node hash is still 0.

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Stop

**Target is** MLS Labs Ani Gaussian Splatting Component  
**Category** MLSLabsRenderer

Returns immediately when the component is invalid or the splat node is not loaded.

#### Inputs

This node has no data inputs.

#### Outputs

This node has no data outputs.

### Pause

**Target is** MLS Labs Ani Gaussian Splatting Component  
**Category** MLSLabsRenderer

Returns immediately when the component is invalid or the splat node is not loaded.

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
| boolean | Return Value | true after the `.mlslabs` file loads successfully. Otherwise false. |

### Frame Index

Read/write float. Defaults to 0. It can be used as an interpolation track. Writes from a Blueprint or Sequencer call **Set Frame Index**.

The displayed frame is this value truncated to an integer. The seek runs only when the index falls in `[0, Frame Count)`, the splat node is loaded, and the component is registered. The native player is then set to `frame / 30` seconds.

**Target is** MLS Labs Ani Gaussian Splatting Component  
**Category** MLSLabsRenderer

#### Get Frame Index

##### Outputs

| Type | Name | Description |
| --- | --- | --- |
| float | Frame Index | The current frame. |

#### Set Frame Index

##### Inputs

| Type | Name | Description |
| --- | --- | --- |
| float | Frame Index | The new frame. If it equals the current value, the frame is not changed. |

##### Outputs

This node has no data outputs.

### Frame Count

Read-only integer. Defaults to 1. After a `.mlslabs` file loads, it becomes the duration in seconds multiplied by 30, truncated to an integer.

**Target is** MLS Labs Ani Gaussian Splatting Component  
**Category** MLSLabsRenderer

#### Get Frame Count

##### Outputs

| Type | Name | Description |
| --- | --- | --- |
| integer | Frame Count | Frame count derived from the clip duration at 30 frames per second. |

### Update Frame Index

Seeks the `.mlslabs` clip to the specified frame. It does not start or stop playback.

**Target is** MLS Labs Ani Gaussian Splatting Component  
**Category** MLSLabsRenderer

Does nothing when the index is outside `[0, Frame Count)`, the component is invalid, the splat node is not loaded, or the component is not registered. A valid index sets **Frame Index** and seeks to `index / 30` seconds.

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| integer | In Index | Target frame index. |

#### Outputs

This node has no data outputs.

---

## Animatable Gaussian Splatting Actor

Frame-sequence Gaussian splatting Actor. It can be used as a type in Blueprints, and a Blueprint can inherit from it. The root component is an **Animatable Gaussian Splatting Component**.

This Actor has no play, stop, or pause node. Set **Splat Data Path** to the directory that contains the frame files, then change frames on the component.

### Splatting Component

Read-only variable. Drag off an Actor reference and use **Get Splatting Component**.

**Target is** Animatable Gaussian Splatting Actor  
**Category** MLSLabsRenderer

#### Outputs

| Type | Name | Description |
| --- | --- | --- |
| Animatable Gaussian Splatting Component object reference | Splatting Component | The frame-sequence component created as the root component. |

---

## Animatable Gaussian Splatting Component

Frame-sequence component that can be added to a Blueprint Actor. **Splat Data Path** is inherited from **Gaussian Splatting Component**. On this class it is a directory of frame files, not a single file.

After the native loader finishes, **Frame Count** becomes the loaded frame count. The component then applies its transform and shows **Frame Index** when that index is in range.

**Frame Index** is written through **Set Frame Index**. Blueprint does not expose a separate function node with that name. This component has no play, stop, pause, or playback-state node.

### Frame Index

Read/write float. Defaults to 0. It can be used as an interpolation track. Writes from a Blueprint or Sequencer call **Set Frame Index**.

The displayed frame is this value truncated to an integer. The frame changes only when the index falls in `[0, Frame Count)`, the splat node is loaded, and the component is registered.

**Target is** Animatable Gaussian Splatting Component  
**Category** MLSLabsRenderer

#### Get Frame Index

##### Outputs

| Type | Name | Description |
| --- | --- | --- |
| float | Frame Index | The current frame. |

#### Set Frame Index

##### Inputs

| Type | Name | Description |
| --- | --- | --- |
| float | Frame Index | The new frame. If it equals the current value, the frame is not changed. |

##### Outputs

This node has no data outputs.

### Frame Count

Read-only integer. Defaults to 1. After the frame directory loads successfully, it becomes the frame count reported by the native loader.

**Target is** Animatable Gaussian Splatting Component  
**Category** MLSLabsRenderer

#### Get Frame Count

##### Outputs

| Type | Name | Description |
| --- | --- | --- |
| integer | Frame Count | Number of loaded frames. |

### Update Frame Index

Switches the sequence to the specified frame.

**Target is** Animatable Gaussian Splatting Component  
**Category** MLSLabsRenderer

Does nothing when the index is outside `[0, Frame Count)`, the component is invalid, the splat node is not loaded, or the component is not registered.

#### Inputs

| Type | Name | Description |
| --- | --- | --- |
| integer | In Index | Target frame index. |

#### Outputs

This node has no data outputs.

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
| boolean | Return Value | true when the key is found. |
| boolean | Value | The boolean that was read. Unchanged when the key is missing. |

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
| boolean | Return Value | true when the key is found. |
| integer | Value | The integer that was read. Unchanged when the key is missing. |

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
| boolean | Return Value | true when the key is found. |
| float | Value | The float that was read. Unchanged when the key is missing. |

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
| boolean | Return Value | true when the key is found. |
| string | Value | The string that was read. Unchanged when the key is missing. |
