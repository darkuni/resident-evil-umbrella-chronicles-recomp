# Resident Evil: The Umbrella Chronicles (Wii, NTSC-U) - native recompilation

A static recompilation of **Resident Evil: The Umbrella Chronicles** for Wii (disc, NTSC-U, `RBUE08`, Capcom / Cavia) to
native code. The game's PowerPC executable is translated to C++ and runs on Windows and Linux (SteamOS / Steam Deck)
with a small runtime that replaces the Wii hardware, IOS and the DSP.

**No game data is included.** You need your own copy of the game as a disc image (`.iso`, `.ciso` or `.wbfs`).

## Status

In progress: boots through the logos, intro movie, title, saves and menus to equipment select. Not released yet.

## Download

[Releases](https://github.com/darkuni/umbrella-chronicles-recomp/releases): Windows zip and Linux tar.gz.
Unpack, put your disc image in the same folder and run `umbrellachronicles.exe` (Windows) or `./umbrellachronicles` (Linux /
Steam Deck): the first start builds the `game` folder from it. The zip's `README.txt` has the controls.

## Building

Same tool chain as the other Wii recomps (House of the Dead: Overkill, Zack & Wiki, TARGET: Terror, Lost in Shadow, Martian Panic): the generated C++ is in
`src/gen`; GitHub Actions cross-compiles the Windows exe with mingw-w64 and SDL2 and builds the Linux one with
`-DUSE_SDL=ON`. Regenerating needs the game's `main.dol` (`src/main.dol`) from your disc (`tools/prepare_disc.py`).
SDK function names come from matching against the other recomps. See [NOTES.md](NOTES.md).

## Disclaimer

Unofficial fan project, **not affiliated with, endorsed by, or sponsored by** Capcom, Cavia or
Nintendo. *Resident Evil: The Umbrella Chronicles* and all related names and marks belong to their respective owners. This repository and its
builds contain no game data; `src/gen` and the exe contain code machine-translated from the game's executable.

## License

The project's own code is released under the [MIT License](LICENSE). Bundled third-party components keep their own
licenses; see [THIRD_PARTY_NOTICES.md](THIRD_PARTY_NOTICES.md).
