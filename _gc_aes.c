#include "gem_aesP.h"

#ifdef __GNUC__
void aes(AESPB *pb)
{
#if defined(__arm__)
	register long r0 __asm__("r0") = 200;
	register AESPB *r1 __asm__("r1") = pb;

	__asm__ __volatile__ (
		"svc #2"
		: "+r"(r0), "+r"(r1)
		:
		: "r2", "r3", "r7", "r12", "lr", "memory", "cc"
	);
#else
	register long d1 __asm__("d1") = (long)pb;

	__asm__ __volatile__ (
		"\tmove.w	#200,%%d0\n"
		"\ttrap	#2\n"
		:
		: "r"(d1)
		: "d0", "d2", "a0", "a1", "a2", "memory", "cc"
	);
#endif
}
#endif
