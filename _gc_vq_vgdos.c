#include "gem_vdiP.h"

#ifdef __GNUC__
long vq_vgdos(void)
{
#if defined(__arm__)
	register long ret __asm__("r0") = -2;

	__asm__ __volatile__ (
		"svc #2"
		: "+r"(ret)
		:
		: "r1", "r2", "r3", "r7", "r12", "lr", "memory", "cc"
	);
	return ret;
#else
	register long ret __asm__("d0");

	__asm__ __volatile__ (
		"\tmoveq	#-2,%d0\n"
		"\ttrap	#2\n"
		: "=r"(ret)
		:
		: "d1", "d2", "a0", "a1", "a2", "memory", "cc"
	);
	return (short)ret == -2 ? (short)ret : ret;
#endif
}
#endif
