/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD graf_shrinkbox_grect(const GRECT *small, const GRECT *large)
{ return mt_graf_shrinkbox_grect(small,large,&aes_global); }
