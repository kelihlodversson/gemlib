/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD objc_edit(OBJECT *tree, WORD object, WORD key, WORD *index, WORD kind)
{
    return mt_objc_edit(tree,object,key,index,kind,&aes_global);
}
