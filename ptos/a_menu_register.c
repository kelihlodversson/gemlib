/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short menu_register(short id, const char *text) { return mt_menu_register(id,text,&aes_global); }
