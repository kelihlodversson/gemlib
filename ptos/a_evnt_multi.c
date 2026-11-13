/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short evnt_multi(short events, short clicks, short button_mask, short button_state,
                 short m1_leave, short m1_x, short m1_y, short m1_w, short m1_h,
                 short m2_leave, short m2_x, short m2_y, short m2_w, short m2_h,
                 short message[], unsigned long interval, short *mx, short *my,
                 short *buttons, short *modifiers, short *key, short *click_count)
{
    return mt_evnt_multi(events, clicks, button_mask, button_state,
                         m1_leave, m1_x, m1_y, m1_w, m1_h, m2_leave, m2_x, m2_y, m2_w, m2_h,
                         message, interval, mx, my, buttons, modifiers, key, click_count, &aes_global);
}
