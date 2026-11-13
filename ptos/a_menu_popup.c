/* Native pTOS binding, moved from pTOS lib/aes.
 * Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

WORD menu_popup(MENU *menu, WORD x, WORD y, MENU *result)
{ return mt_menu_popup(menu,x,y,result,&aes_global); }
