/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short appl_init(void)
{
    gl_apid = mt_appl_init(&aes_global);
    gl_ap_version = aes_global.ap_version;
    return gl_apid;
}
