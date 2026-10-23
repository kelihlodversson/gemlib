/*
 * _pc_asm_x86_64.S - x86-64 ILP32 user-mode AES/VDI trap bindings for gemlib
 *
 * x86-64 ILP32 userspace ABI: 32-bit int/long/pointer, 64-bit long long.
 * The kernel runs in 64-bit mode (LP64), but userspace stays ILP32.
 *
 * These are the x86-64 equivalents of the m68k _pc_asm.s bindings.
 * Called via the syscall instruction with the trap number in the high
 * 32 bits of RAX and the function number in the low 32 bits.
 *
 * Copyright (C) 2026 The pTOS development team.
 * This file is distributed under the GPL, version 2 or any later version.
 */

	.text
	.globl	aes
	.type	aes, @function
	.align	4
aes:
	/* RDI = parameter block pointer (32-bit in ILP32) */
	movl	%edi, %edx		/* d1 = pb (32-bit) */
	movl	$200, %eax		/* d0 = 200 (AES trap) */
	orl	$(2 << 32), %eax		/* trap = 2 in upper 32 bits */
	movl	%edx, %edi
	syscall
	ret

	.globl	vdi
	.type	vdi, @function
	.align	4
vdi:
	/* RDI = parameter block pointer (32-bit in ILP32) */
	movl	%edi, %edx		/* d1 = pb (32-bit) */
	movl	$115, %eax		/* d0 = 115 (VDI trap) */
	orl	$(2 << 32), %eax		/* trap = 2 in upper 32 bits */
	movl	%edx, %edi
	syscall
	ret

	.globl	vq_gdos
	.type	vq_gdos, @function
	.align	4
vq_gdos:
	movl	$-2, %eax		/* d0 = -2 */
	orl	$(2 << 32), %eax		/* trap = 2 in upper 32 bits */
	syscall
	cmpl	$-2, %eax
	sete	%al
	movzbl	%al, %eax
	ret

	.globl	vq_vgdos
	.type	vq_vgdos, @function
	.align	4
vq_vgdos:
	movl	$-2, %eax		/* d0 = -2 */
	orl	$(2 << 32), %eax		/* trap = 2 in upper 32 bits */
	syscall
	cmpl	$-2, %eax
	jne	1f
	movl	$-2, %eax
1:
	ret
