/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short graf_mouse(short mode, const MFORM *form) { return mt_graf_mouse(mode,form,&aes_global); }
