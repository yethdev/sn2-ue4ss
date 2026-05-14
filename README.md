# Yeth's Framework Pack for Subnautica 2

This pack is built around the live Steam build I tested on May 14, 2026: build `23165626`, file version `5.6.1.0`. The game path that mattered in practice was `Subnautica2\Binaries\Win64\Subnautica2-Win64-Shipping.exe`, not the launcher stub above it.

UE4SS itself is not bundled here. You still need the release zip so the proxy DLL and `UE4SS.dll` are present before you deploy either pack.

There are only two choices.

- `EndUserPack` is the quiet runtime for people who want to install mods and play.
- `DevPack` is the same base runtime with starter material left in place for authors.

If you are only trying to run released mods, start with `EndUserPack/README.md`.

If you are writing Lua or native mods, start with `DevPack/README.md`.

Everything that matters for the public pack is inside those two trees. If you cloned this from GitHub, you already have the files that are meant to ship.

Both pack variants keep the UE4SS console off by default, so a normal launch stays quiet.