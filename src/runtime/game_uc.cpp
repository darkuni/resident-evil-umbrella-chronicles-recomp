// Resident Evil: The Umbrella Chronicles specific code.
#include "ppc.h"
#include "hle.h"
#include "config.h"

// Frame limiter (fn_801581E0, "uc_FrameLimiter"): waits for VI retraces until the retrace counter at
// timer+0x20 reaches the minimum at timer+0x28, then turns the retraces that passed (up to 5) into the frame
// time (timer+4/+8 = n / 59.94 s) that game logic advances by. Boot (fn_8003F830) sets the minimum and its
// default (timer+0x2C) to 2: 30 fps gameplay; some front-end screens set 1 and restore it. With fps60 the
// minimum is held at 1, so gameplay runs at 60 fps with a 1/59.94 s step. Off again: the game's default.
static const uint32_t TIMER = 0x804D3318u;
void hle_wrap_uc_FrameLimiter(Ctx* c, GuestFn orig) {
    static bool forced = false;
    if (g_cfg.fps60) {
        W32(TIMER + 0x28, 1);
        forced = true;
    } else if (forced) {
        W32(TIMER + 0x28, R32(TIMER + 0x2C));
        forced = false;
    }
    orig(c);
}
