# Resident Evil: The Umbrella Chronicles (RBUE08, Wii disc, NTSC-U) - native recomp notes

Same recompiler and runtime as House of the Dead: Overkill, Martian Panic, Zack & Wiki, TARGET: Terror and Lost
in Shadow (copied from the House of the Dead: Overkill repo).

## Source
- main.dol sha1 7ed67efe2ba9b0de1cef0bbb2ea157d7a43d7f25, entry 0x8000403C, r13 0x806CA620, r2 0x806CC700.
  RVL SDK Nov 2006 (AI/DSP) / Dec 2006 (AX) / Apr 2007 (DVD). Capcom / Cavia engine, NW4R, CRI ADX + Sofdec
  (software MPEG decode in the game's own code: no runtime support needed), no REL modules, no symbols.
- Resident Evil: The Darkside Chronicles (SBDE08) is built on the same code base: its Havok build tag reads
  "Cavia_BIOHAZARD_UC2".

## Naming
- `dtk dol split` (dtk 1.8.4): 16,158 functions, 234 jump tables. xmatch (`tools/xmatch.py`) against Martian Panic,
  House of the Dead: Overkill, Zack & Wiki, TARGET: Terror, Lost in Shadow, My Life as a King and Geometry Wars
  names 3,258 functions.
- Corrected by hand (short functions that matched by accident): the xmatch "KPADRead" at 0x80028FE8 is a 3-word
  DVDReadPrio wrapper (fn_80028FE8); the real KPADRead is 0x802F21EC. "OSReport" 0x801CCA38 and "OSPanic"
  0x801D479C are game code (fn_); OSReport is the 1-word stub at 0x8025B278.
- Older SDK: no WPADGetStatus, WPAD simple-sync calls or SCGetAspectRatio; KPADRead(chan, buf, len).

## game.h constants
- __AXDSPResumeCallback 0x802750E0, DecrementerExceptionCallback 0x80259850, iosFree 0x802AA544, OSExitThread
  0x80261BAC, OSDisableScheduler 0x802613A4 / OSEnableScheduler 0x802613E0, __OSReschedule 0x802618EC,
  SelectThread idle branch 0x80261818 (same +0x154 offset as House of the Dead), interrupt table r13-0x6780,
  IOS heap r13-0x7044. KPADStatus stride 0x84.

## Input
- The game maps KPAD pos to the picture with its own gain: x * 1.25 and y * 1.25 * (16:9 / 4:3). Measured from
  the crosshair; G_POINTER_GAIN_X/Y (0.8 / 0.6) in game.h undo it so the crosshair follows the mouse 1:1.

- Reload is a shake of the remote ("Shake the Wii Remote to reload the gun"): G_RELOAD_SHAKE makes middle mouse
  and V shake it too (Shift and LB / LT already do).

- Controls the game uses (dialog.arc tutorial.csv + mes_us.txtres; button icons are the Shift-JIS glyphs
  Alpha = A, Beta = B, "wii" = remote motion, Gamma = a third button): B fire, A pick up / items / "Move", A held +
  B = grenade, A held + shake = knife, shake = reload and counterattack, d-pad (or Gamma) = switch weapons,
  Nunchuk stick = camera. Wii Zapper control types need the Nunchuk, so G_NUNCHUK keeps it attached;
  G_NUNCHUK_LIGHTGUN lays the PC controls out without overlaps (dist/README.txt). G or the left stick click shakes
  the Nunchuk (KPAD ex_status acc). wiimote.cpp now switches a real Nunchuk on (unencrypted) and reads report 0x37
  (basic IR + extension): stick, C/Z, accelerometer.

## Frame rate
- The game's frame limiter (fn_801581E0, named uc_FrameLimiter) waits for VI retraces until a counter at
  0x804D3338 (bumped by its post-retrace callback fn_801582FC) reaches the minimum at 0x804D3340, then turns the
  retraces that passed (up to 5) into the frame time game logic advances by (n / 59.94 s). Boot (fn_8003F830)
  sets the minimum and its default (0x804D3344) to 2: gameplay runs at 30 fps. Front-end screens set 1 (60 fps)
  and restore it (fn_800A8228 / fn_800A7864, fn_801FC03C / fn_801FC134, fn_801F51DC / fn_801F52E4).
- "Frame rate" setting (fps60 in the ini, G_FPS60): game_uc.cpp wraps the limiter and holds the minimum at 1.
  Turned off again, it puts back the game's default.

## Performance (60 fps)
- Gameplay at 60 fps needs a frame under 16.7 ms. Shane's log at 60 fps: 30.0 fps, emulation thread ~65% busy
  (~22 ms per frame), "GPU draw" ~35% (~12 ms per frame in gx_draw), ~18,000-23,000 GX draws and ~100,000
  vertices per frame (all transformed and lit on the CPU), batched into ~400-550 GL draws.
- Container profile (SIGPROF, PROFILE=): vertex path (light_channel, gx_draw with transform inlined,
  decode_vertex, setup_draw_state) the largest per-frame cost; AXFXReverbHiExpCallback and the DSP mixer look
  big only because audio runs in real time while the software-GL frames are slow.
- Changes: CP / XF register writes only invalidate the vertex setup when the value changes (318 rebuilds per
  gameplay frame); vertex sizes cached per VAT; vertices transformed straight into the batch (no temporary,
  no zero-fill); color + alpha lit in one pass when they share the light setup; decode loops only over the
  attributes present; gx_render / gx_fifo at -O3; rdtsc for the draw/copy timing (two clock calls per draw
  cost ~1 ms a frame); guest memory helpers always inlined; trace_call inline (ring write; TRACEFN takes the
  slow path); dispatch() has a direct-mapped cache in front of its binary search. The perf log adds vertices
  and vertex-setup rebuilds per frame.
- Closing the window / Quit: std::_Exit after flushing the log (exit() with the game's threads running made
  the C runtime abort: "signal 22").

- Render thread (gx_fifo.cpp): after the draw-path work Shane's log showed 60 fps up to ~75k vertices per
  frame and 30 fps at 100-145k (frame ~18 ms). The FIFO front-end (PI/CP pointers, breakpoints, watermarks)
  stays on the guest thread; the bytes the GP consumes go through a 64 MB SPSC ring to a render thread that
  parses, transforms and draws, and posts draw-done / token interrupts when it reaches them, as the real GP
  does. The renderer's GL context lives on that thread (the per-guest-thread context hand-off never
  triggers). render_thread = 0 in the ini or GX_SYNC=1 parses on the guest thread as before. In the container
  the scripted run reaches chapter select in 160 s instead of ~10 minutes.

## Status
- Boots through the strap and Zapper screens, the CRIWARE logo, the intro movie (Sofdec), the title, save
  creation (NAND, BIO_UC0.DAT), load / new game, difficulty, scenario, chapter ("Train Derailment 1"),
  character and equipment select, the chapter 1 intro and gameplay on the Ecliptic Express (HUD, tutorial,
  zombies).

## Testing
- `POINTER=x,y` takes 0..1 fractions of the picture (or a timeline `x,y;x,y@frame;...` with `AUTOPRESS_FRAMES=1`).
  The trigger is B. Menu positions: NEW GAME 0.5,0.205; first save slot / first scenario / first chapter /
  first character 0.234,0.44; dialog "yes" 0.28,0.66; equipment OK 0.875,0.83.
