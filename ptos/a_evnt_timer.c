/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short evnt_timer(unsigned long interval) { return mt_evnt_timer(interval, &aes_global); }
