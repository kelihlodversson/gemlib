#include "gem_vdiP.h"

#ifdef __GNUC__
void vdi(VDIPB *pb)
{
#if defined(__arm__)
	typedef struct
	{
		short code, nptsin, nptsout, nintin, nintout, subcode, handle, pad;
		void *ptr1, *ptr2;
	} ARM_VDICONTROL;
	ARM_VDICONTROL control;
	VDIPB arm_pb;

	control.code = pb->control[0];
	control.nptsin = pb->control[1];
	control.nptsout = pb->control[2];
	control.nintin = pb->control[3];
	control.nintout = pb->control[4];
	control.subcode = pb->control[5];
	control.handle = pb->control[6];
	control.pad = 0;
	control.ptr1 = vdi_control_get_ptr(pb->control, 0);
	control.ptr2 = vdi_control_get_ptr(pb->control, 1);

	arm_pb.control = (short *)&control;
	arm_pb.intin = pb->intin;
	arm_pb.ptsin = pb->ptsin;
	arm_pb.intout = pb->intout;
	arm_pb.ptsout = pb->ptsout;

	__asm__ __volatile__ (
		"mov r0, #0x73\n\t"
		"mov r1, %0\n\t"
		"svc #2"
		:
		: "r"(&arm_pb)
		: "r0", "r1", "r2", "r3", "r7", "r12", "lr", "memory", "cc"
	);

	pb->control[2] = control.nptsout;
	pb->control[4] = control.nintout;
	pb->control[6] = control.handle;
	vdi_control_set_ptr(pb->control, 0, control.ptr1);
	vdi_control_set_ptr(pb->control, 1, control.ptr2);
#else
	register long d1 __asm__("d1") = (long)pb;

	__asm__ __volatile__ (
		"\tmoveq	#115,%%d0\n"
		"\ttrap	#2\n"
		:
		: "r"(d1)
		: "d0", "d2", "a0", "a1", "a2", "memory", "cc"
	);
#endif
}
#endif
