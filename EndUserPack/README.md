# EndUserPack

This is the small install. Use it if you want other people's mods without dragging the dev side into the game.

What you still need on your own: a UE4SS release zip. This pack does not include `dwmapi.dll`, `xinput1_3.dll`, or `UE4SS.dll`.

Current live shipping path from the test build:

`Subnautica2\Binaries\Win64\Subnautica2-Win64-Shipping.exe`

Do the install in this order.

1. Put UE4SS in the same `Win64` folder as the shipping exe.
2. Make sure you are looking at the real shipping exe folder, not the launcher one above it.
3. Copy everything inside `EndUserPack\ue4ss` into the game's `ue4ss` folder under that same `Win64` directory.
4. Drop each mod folder into `ue4ss\Mods`.
5. Add `ModName : 1` lines to `ue4ss\Mods\mods.txt`.
6. Launch the game the normal way.

This tree only ships the runtime settings, an empty mod list, and the shared stub file. There are no bundled gameplay mods here and nothing should pop a console window during a normal launch.

When you update later, overwrite this pack's `ue4ss` files and leave your own mod folders alone.

If the game launches and no `UE4SS.log` shows up, the proxy DLL is usually in the wrong folder or Steam is still pointing you at the launcher instead of the real shipping exe. Check the `Win64` path first before changing anything else.