/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short evnt_keybd(void) { return mt_evnt_keybd(&aes_global); }
