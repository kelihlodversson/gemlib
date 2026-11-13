/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD objc_sysvar(WORD mode, WORD which, WORD in1, WORD in2, WORD *out1, WORD *out2)
{ return mt_objc_sysvar(mode,which,in1,in2,out1,out2,&aes_global); }
