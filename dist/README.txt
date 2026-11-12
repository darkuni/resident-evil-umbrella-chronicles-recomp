Resident Evil: The Umbrella Chronicles (Wii) - native Windows and Linux build (static recompilation)  @VERSION@
https://github.com/darkuni/resident-evil-umbrella-chronicles-recomp

No game data is included. You need your own Resident Evil: The Umbrella Chronicles disc image (Wii, NTSC-U, RBUE08)
as .iso, .ciso or .wbfs.

Setup
  Put your disc image (.iso, .ciso or .wbfs) in this folder and run umbrellachronicles.exe (Windows) or
  umbrellachronicles (Linux / Steam Deck: ./umbrellachronicles, or add it to Steam as a non-Steam game). On the
  first start it builds the "game" folder from it (a minute or two); after that the disc image isn't
  needed any more.

Requirements: 64-bit Windows 10/11, or 64-bit Linux with SDL2 (SteamOS has it; elsewhere install
libsdl2 / sdl2 from your package manager); a GPU with OpenGL 3.3.

Controls (Wii Remote + Nunchuk / Wii Zapper)
  The game sees a Wii Remote with a Nunchuk attached (the Zapper control types need it). Shoot
  with B; A picks things up, uses items and dodges ("Move"); hold A and press B to throw a
  grenade; hold A and shake the remote to swing the knife; shake the remote to reload and to
  counterattack; the d-pad switches weapons; the Nunchuk stick moves the camera. The options let
  you swap A and B (control types A/B).

                 Mouse + keyboard        Gamepad                 Wii
  aim            mouse (or I/J/K/L)      right stick             pointer
  B (fire)       left button, Space      RT, B                   B / Zapper trigger
  A              right button, X         A                       A
  shake remote   middle button, V, Shift LT                      reload, knife, counter
  Nunchuk stick  W/A/S/D                 left stick              camera
  C / Z          C / Z                   RB / LB                 Nunchuk C / Z
  shake Nunchuk  G                       left stick click        Nunchuk shake
  d-pad          arrow keys              d-pad                   switch weapons
  1 / 2          1 / 2                   X / Y                   1 / 2
  + / - / HOME   Enter / Backspace / H   Start / Back / Guide    + / - / HOME

  "Mouse buttons" in the settings menu (or controls = mouse / mouse_swap in
  umbrellachronicles.ini) swaps the left and right mouse buttons. "Capture mouse"
  (capture_mouse = 1) keeps the cursor inside the window while you play.

Wii Remote motions (hold Ctrl and move the mouse: left/right twists, up/down tilts, fast moves
are swings; Q/E and R/F on the keyboard)

Real Wii Remote (optional)
  Pair it with Windows: Settings > Bluetooth > Add device, press the red SYNC button under the
  battery cover, pick "Nintendo RVL-CNT-01" (skip/leave the PIN empty). A Mayflash DolphinBar
  in mode 4 works too. Linux: pair it in the Bluetooth settings; reading it needs access to its
  /dev/hidraw device (a udev rule, e.g. KERNEL=="hidraw*", ATTRS{idVendor}=="057e", MODE="0666").
  Its buttons, motion and (with a sensor bar) pointer are used, and a Nunchuk plugged into it
  (stick, C/Z, motion). wiimote = 0 in umbrellachronicles.ini
  turns it off.

Keys
  F1 / Esc (or Start+Back on a gamepad)  settings menu (resolution, widescreen, vsync, MSAA,
                                         texture filtering, mouse buttons, game speed)
  F11 / Alt+Enter                        fullscreen
  Hold Tab (or click the right stick)    fast-forward

Files
  umbrellachronicles.ini        settings (created on first run)
  umbrellachronicles.log        log of the last run - include it with bug reports
  umbrellachronicles_hang.txt   written if no frame is shown for 8 seconds - include it too
  nand\                   saves


Unofficial fan project, not affiliated with Capcom, Cavia or Nintendo.
The exe contains code machine-translated from the game's executable; game data comes from your
own disc image.
System font: Droid Sans replacements from Dolphin (Apache 2.0, see ipl-font-licenses.txt).
