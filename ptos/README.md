Native pTOS AES bindings
=======================

`make BACKEND=ptos ARCH=x32 PTOS_INCLUDE=/path/to/ptos/include` builds the
classic AES wrappers, the default typed AESGLOBAL and rectangle helpers into
`.libptos-x32/libgem.a`. Link clients with this archive followed by libaes.
The backend calls libaes's mt_* functions directly and contains no trap or
CUIS transport. `ARCH=arm` and `ARCH=m68k` select cross compilers; runtime
support still depends on the corresponding libaes port.

Install with `make BACKEND=ptos ARCH=x32 ... PREFIX=/usr install`. The installed
`gem.h`/`mt_gem.h` use the pTOS SDK's `libaes.h`, canonical `AESGLOBAL` and GEM
types. From a source checkout, `-I/path/to/gemlib/ptos -I/path/to/ptos/include`
selects these headers instead of the traditional trap bindings. Existing m68k/ARM trap builds
retain their existing headers and implementation. Native VDI is supplied by
pTOS's separate VDI bindings.

`appl_init()` and successful `appl_exit()` update GEMlib's `gl_apid` and
`gl_ap_version`. Direct mt_* calls operate on the supplied global structure;
they never discover, reset or synchronize GEMlib's default binding state.
`ap_private` remains owned by the caller. Context lifetime and CUIS identity
are libaes contracts, not responsibilities of this binding archive.
