	.file	"main.cpp"
	.globl	B
	.bss
	.align 32
	.type	B, @object
	.size	B, 112
B:
	.zero	112
	.globl	B2
	.align 32
	.type	B2, @object
	.size	B2, 112
B2:
	.zero	112
	.text
	.globl	_Z6bigFun3Big
	.type	_Z6bigFun3Big, @function
_Z6bigFun3Big:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$100, 116(%rbp)
	movq	-8(%rbp), %rax
	movq	16(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	32(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	40(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	48(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	56(%rbp), %rdx
	movq	%rdx, 40(%rax)
	movq	64(%rbp), %rdx
	movq	%rdx, 48(%rax)
	movq	72(%rbp), %rdx
	movq	%rdx, 56(%rax)
	movq	80(%rbp), %rdx
	movq	%rdx, 64(%rax)
	movq	88(%rbp), %rdx
	movq	%rdx, 72(%rax)
	movq	96(%rbp), %rdx
	movq	%rdx, 80(%rax)
	movq	104(%rbp), %rdx
	movq	%rdx, 88(%rax)
	movq	112(%rbp), %rdx
	movq	%rdx, 96(%rax)
	movq	120(%rbp), %rdx
	movq	%rdx, 104(%rax)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_Z6bigFun3Big, .-_Z6bigFun3Big
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	addq	$-128, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-128(%rbp), %rax
	pushq	B+104(%rip)
	pushq	B+96(%rip)
	pushq	B+88(%rip)
	pushq	B+80(%rip)
	pushq	B+72(%rip)
	pushq	B+64(%rip)
	pushq	B+56(%rip)
	pushq	B+48(%rip)
	pushq	B+40(%rip)
	pushq	B+32(%rip)
	pushq	B+24(%rip)
	pushq	B+16(%rip)
	pushq	B+8(%rip)
	pushq	B(%rip)
	movq	%rax, %rdi
	call	_Z6bigFun3Big
	addq	$112, %rsp
	movq	-128(%rbp), %rax
	movq	%rax, B2(%rip)
	movq	-120(%rbp), %rax
	movq	%rax, B2+8(%rip)
	movq	-112(%rbp), %rax
	movq	%rax, B2+16(%rip)
	movq	-104(%rbp), %rax
	movq	%rax, B2+24(%rip)
	movq	-96(%rbp), %rax
	movq	%rax, B2+32(%rip)
	movq	-88(%rbp), %rax
	movq	%rax, B2+40(%rip)
	movq	-80(%rbp), %rax
	movq	%rax, B2+48(%rip)
	movq	-72(%rbp), %rax
	movq	%rax, B2+56(%rip)
	movq	-64(%rbp), %rax
	movq	%rax, B2+64(%rip)
	movq	-56(%rbp), %rax
	movq	%rax, B2+72(%rip)
	movq	-48(%rbp), %rax
	movq	%rax, B2+80(%rip)
	movq	-40(%rbp), %rax
	movq	%rax, B2+88(%rip)
	movq	-32(%rbp), %rax
	movq	%rax, B2+96(%rip)
	movq	-24(%rbp), %rax
	movq	%rax, B2+104(%rip)
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L5
	call	__stack_chk_fail
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
