/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD fsel_input(char *path, char *selection, WORD *button)
{ return mt_fsel_input(path,selection,button,&aes_global); }
