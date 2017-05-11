	.file	"main.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"X::X"
	.section	.text._ZN1XC2Ev,"axG",@progbits,_ZN1XC5Ev,comdat
	.align 2
	.weak	_ZN1XC2Ev
	.type	_ZN1XC2Ev, @function
_ZN1XC2Ev:
.LFB1022:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$_ZTV1X+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1X15virtualFunctionEv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1022:
	.size	_ZN1XC2Ev, .-_ZN1XC2Ev
	.weak	_ZN1XC1Ev
	.set	_ZN1XC1Ev,_ZN1XC2Ev
	.section	.rodata
.LC1:
	.string	"X::virtualFunction"
	.section	.text._ZN1X15virtualFunctionEv,"axG",@progbits,_ZN1X15virtualFunctionEv,comdat
	.align 2
	.weak	_ZN1X15virtualFunctionEv
	.type	_ZN1X15virtualFunctionEv, @function
_ZN1X15virtualFunctionEv:
.LFB1024:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1024:
	.size	_ZN1X15virtualFunctionEv, .-_ZN1X15virtualFunctionEv
	.section	.text._ZN1YC2Ev,"axG",@progbits,_ZN1YC5Ev,comdat
	.align 2
	.weak	_ZN1YC2Ev
	.type	_ZN1YC2Ev, @function
_ZN1YC2Ev:
.LFB1026:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1XC2Ev
	movl	$_ZTV1Y+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1Y15virtualFunctionEv
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1026:
	.size	_ZN1YC2Ev, .-_ZN1YC2Ev
	.weak	_ZN1YC1Ev
	.set	_ZN1YC1Ev,_ZN1YC2Ev
	.section	.rodata
.LC2:
	.string	"Y::virtualFunction"
	.section	.text._ZN1Y15virtualFunctionEv,"axG",@progbits,_ZN1Y15virtualFunctionEv,comdat
	.align 2
	.weak	_ZN1Y15virtualFunctionEv
	.type	_ZN1Y15virtualFunctionEv, @function
_ZN1Y15virtualFunctionEv:
.LFB1028:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1028:
	.size	_ZN1Y15virtualFunctionEv, .-_ZN1Y15virtualFunctionEv
	.text
	.globl	main
	.type	main, @function
main:
.LFB1029:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1029
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$16, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movl	$8, %edi
.LEHB0:
	call	_Znwm
.LEHE0:
	movq	%rax, %rbx
	movq	%rbx, %rdi
.LEHB1:
	call	_ZN1XC1Ev
.LEHE1:
	movq	%rbx, -32(%rbp)
	movl	$8, %edi
.LEHB2:
	call	_Znwm
.LEHE2:
	movq	%rax, %rbx
	movq	%rbx, %rdi
.LEHB3:
	call	_ZN1YC1Ev
.LEHE3:
	movq	%rbx, -24(%rbp)
	movq	-32(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rdi
.LEHB4:
	call	*%rax
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, %rdi
	call	*%rax
	movl	$0, %eax
	jmp	.L11
.L9:
	movq	%rax, %r12
	movq	%rbx, %rdi
	call	_ZdlPv
	movq	%r12, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume
.L10:
	movq	%rax, %r12
	movq	%rbx, %rdi
	call	_ZdlPv
	movq	%r12, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume
.LEHE4:
.L11:
	addq	$16, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1029:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1029:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1029-.LLSDACSB1029
.LLSDACSB1029:
	.uleb128 .LEHB0-.LFB1029
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1029
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L9-.LFB1029
	.uleb128 0
	.uleb128 .LEHB2-.LFB1029
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB3-.LFB1029
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L10-.LFB1029
	.uleb128 0
	.uleb128 .LEHB4-.LFB1029
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
.LLSDACSE1029:
	.text
	.size	main, .-main
	.weak	_ZTV1Y
	.section	.rodata._ZTV1Y,"aG",@progbits,_ZTV1Y,comdat
	.align 8
	.type	_ZTV1Y, @object
	.size	_ZTV1Y, 24
_ZTV1Y:
	.quad	0
	.quad	_ZTI1Y
	.quad	_ZN1Y15virtualFunctionEv
	.weak	_ZTV1X
	.section	.rodata._ZTV1X,"aG",@progbits,_ZTV1X,comdat
	.align 8
	.type	_ZTV1X, @object
	.size	_ZTV1X, 24
_ZTV1X:
	.quad	0
	.quad	_ZTI1X
	.quad	_ZN1X15virtualFunctionEv
	.weak	_ZTI1Y
	.section	.rodata._ZTI1Y,"aG",@progbits,_ZTI1Y,comdat
	.align 8
	.type	_ZTI1Y, @object
	.size	_ZTI1Y, 24
_ZTI1Y:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS1Y
	.quad	_ZTI1X
	.weak	_ZTS1Y
	.section	.rodata._ZTS1Y,"aG",@progbits,_ZTS1Y,comdat
	.type	_ZTS1Y, @object
	.size	_ZTS1Y, 3
_ZTS1Y:
	.string	"1Y"
	.weak	_ZTI1X
	.section	.rodata._ZTI1X,"aG",@progbits,_ZTI1X,comdat
	.align 8
	.type	_ZTI1X, @object
	.size	_ZTI1X, 16
_ZTI1X:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS1X
	.weak	_ZTS1X
	.section	.rodata._ZTS1X,"aG",@progbits,_ZTS1X,comdat
	.type	_ZTS1X, @object
	.size	_ZTS1X, 3
_ZTS1X:
	.string	"1X"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1038:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L14
	cmpl	$65535, -8(%rbp)
	jne	.L14
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L14:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1038:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1039:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1039:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
