/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short graf_handle(short *wchar, short *hchar, short *wbox, short *hbox)
{
    return mt_graf_handle(wchar,hchar,wbox,hbox,&aes_global);
}
