/* Copyright (C) 2026 the pTOS development team. GPL version 2 or later. */
#include "gem.h"

short shel_readve(const char **path, const char *const **argv, const char *const **envp)
{
    return mt_shel_readve(path,argv,envp,&aes_global);
}
