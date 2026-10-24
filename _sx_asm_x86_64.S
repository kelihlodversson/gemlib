/*
 * _sx_asm_x86_64.S - x86-64 ILP32 user-mode AES/VDI trap bindings for gemlib
 *
 * x86-64 ILP32 userspace ABI: 32-bit int/long/pointer, 64-bit long long.
 * The kernel runs in 64-bit mode (LP64), but userspace stays ILP32.
 *
 * These are the x86-64 equivalents of the m68k _sx_asm.s bindings.
 *
 * Copyright (C) 2026 The pTOS development team.
 * This file is distributed under the GPL, version 2 or any later version.
 */

	.text
	.globl	_aes
	.type	_aes, @function
	.align	4
_aes:
	movl	4(%rsp), %edx		/* d1 = pb (32-bit) */
	movl	$200, %eax		/* d0 = 200 (AES trap) */
	orl	$0x200000000, %eax		/* trap = 2 in upper 32 bits */
	movl	%edx, %edi
	syscall
	ret

	.globl	_vdi
	.type	_vdi, @function
	.align	4
_vdi:
	movl	4(%rsp), %edx		/* d1 = pb (32-bit) */
	movl	$115, %eax		/* d0 = 115 (VDI trap) */
	orl	$0x200000000, %eax		/* trap = 2 in upper 32 bits */
	movl	%edx, %edi
	syscall
	ret

	.globl	_vq_gdos
	.type	_vq_gdos, @function
	.align	4
_vq_gdos:
	movl	$-2, %eax		/* d0 = -2 */
	orl	$0x200000000, %eax		/* trap = 2 in upper 32 bits */
	syscall
	cmpl	$-2, %eax
	sete	%al
	movzbl	%al, %eax
	ret

	.globl	_vq_vgdos
	.type	_vq_vgdos, @function
	.align	4
_vq_vgdos:
	movl	$-2, %eax		/* d0 = -2 */
	orl	$0x200000000, %eax		/* trap = 2 in upper 32 bits */
	syscall
	cmpl	$-2, %eax
	bne	1f
	movl	$-2, %eax
1:
	ret
