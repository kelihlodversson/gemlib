/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD fsel_exinput(char *path, char *selection, WORD *button, const char *title)
{ return mt_fsel_exinput(path,selection,button,title,&aes_global); }
