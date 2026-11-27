/* Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short shel_writeve(short mode, short graphical, short execution, const void *command,
                   char *const argv[], char *const envp[])
{
    return mt_shel_writeve(mode,graphical,execution,command,argv,envp,&aes_global);
}
