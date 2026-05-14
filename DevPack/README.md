# DevPack

Use this tree if you are making mods and want a clean author setup without bundling example gameplay mods into the public pack. The runtime is still quiet by default.

Get UE4SS into `Subnautica2\Binaries\Win64`, make sure you are beside the real shipping exe, then copy everything inside `DevPack\ue4ss` into the game's `ue4ss` folder.

What is already in here:

- `starter\LuaBlank` for a minimal Lua starting point.
- `starter\NativeBlank` for a minimal native starting point.
- `ue4ss\Mods\mods.txt` as the empty load list you fill yourself.
- `ue4ss\Mods\shared\Types.lua` as the shared stub file.

For a new Lua mod, copy `starter\LuaBlank` into `ue4ss\Mods\YourModName`, change the `modId`, then add `YourModName : 1` to `mods.txt`.

For native work, start from `starter\NativeBlank\main.cpp`.

If you came from BepInEx, the only mapping you really need at the start is this: the proxy DLL is `dwmapi.dll` instead of `winhttp.dll`, the load list is `mods.txt`, and your mod lives under `ue4ss\Mods\<Name>`.

When the game updates, assume old dumps and old offsets are stale until proven otherwise.