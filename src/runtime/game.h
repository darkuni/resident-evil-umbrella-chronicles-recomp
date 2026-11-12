// Per-game constants for Resident Evil: The Umbrella Chronicles (Wii disc, NTSC-U, RBUE08).
// Addresses come from config/symbols.txt: dtk analysis, SDK names matched against the other recomps (Martian
// Panic's shipped ELF first). r13 (0x806CA620) offsets were read from the instruction that loads the variable in
// the named SDK function. RVL SDK Nov 2006 / DVD Apr 2007: the older KPADRead(chan, buf, len) entry, no
// WPADGetStatus / simple-sync / SCGetAspectRatio.
#pragma once
#define GAME_NAME        "Resident Evil: The Umbrella Chronicles"
#define GAME_EXE         "umbrellachronicles"
#define GAME_INI         "umbrellachronicles.ini"
#define GAME_SETUP_WHAT  "Resident Evil: The Umbrella Chronicles disc image (.iso, .ciso or .wbfs)"

#define G_AX_RESUME_CB          0x802750E0u   // __AXDSPResumeCallback
#define G_DECREMENTER_CB        0x80259850u   // DecrementerExceptionCallback
#define G_IOS_FREE              0x802AA544u   // iosFree(heap, ptr)
#define G_OS_EXIT_THREAD        0x80261BACu   // OSExitThread
#define G_SDA_INTERRUPT_TABLE   0x6780u       // __OSGetInterruptHandler: lwz r4,-0x6780(r13)
#define G_SDA_IOS_HEAP          0x7044u       // __ios_Ipc2: lwz r3,-0x7044(r13) before iosFree
#define G_FN_OS_EXIT_THREAD     f_80261BAC
#define G_FN_IOS_FREE           f_802AA544
#define G_KPAD_STATUS_SIZE      0x84u         // KPADStatus (KPADRead: mulli 0x84)
#define G_FN_OS_DISABLE_SCHEDULER f_802613A4  // interrupt handlers run with the scheduler off (hle_thread.cpp irq_check)
#define G_FN_OS_ENABLE_SCHEDULER  f_802613E0
#define G_FN_OS_RESCHEDULE        f_802618EC  // __OSReschedule after the handlers
#define G_IOS_ASYNC_DELAY_US    2000u         // async IOS requests (disc reads) complete 2 ms later (hle_ios.cpp)
#define G_RELOAD_SHAKE          1             // reload = shake the remote: middle mouse / V / Shift / LB / LT
#define G_MOUSE_SWAP_DEFAULT    1             // mouse: left button = B (the trigger), right = A
#define G_DISC_BYTES_PER_SEC    8000000u      // async disc reads complete after len / 8 MB/s (hle_ios.cpp)
#define G_POINTER_GAIN_X        0.8f          // the game maps KPAD pos x * 1.25 to the picture (measured)
#define G_POINTER_GAIN_Y        0.6f          // and y * 1.25 * (16:9 / 4:3): 1/0.6
