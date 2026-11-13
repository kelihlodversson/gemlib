/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short evnt_mesag(short message[8]) { return mt_evnt_mesag(message, &aes_global); }
