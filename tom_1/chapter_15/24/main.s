	.file	"main.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"Empty"
	.section	.text._ZNK4IPet5speakB5cxx11Ev,"axG",@progbits,_ZNK4IPet5speakB5cxx11Ev,comdat
	.align 2
	.weak	_ZNK4IPet5speakB5cxx11Ev
	.type	_ZNK4IPet5speakB5cxx11Ev, @function
_ZNK4IPet5speakB5cxx11Ev:
.LFB1021:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1021
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-25(%rbp), %rdx
	movq	-40(%rbp), %rax
	movl	$.LC0, %esi
	movq	%rax, %rdi
.LEHB0:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE0:
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movq	-40(%rbp), %rax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L4
	jmp	.L6
.L5:
	movq	%rax, %rbx
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB1:
	call	_Unwind_Resume
.LEHE1:
.L6:
	call	__stack_chk_fail
.L4:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1021:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table._ZNK4IPet5speakB5cxx11Ev,"aG",@progbits,_ZNK4IPet5speakB5cxx11Ev,comdat
.LLSDA1021:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1021-.LLSDACSB1021
.LLSDACSB1021:
	.uleb128 .LEHB0-.LFB1021
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L5-.LFB1021
	.uleb128 0
	.uleb128 .LEHB1-.LFB1021
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE1021:
	.section	.text._ZNK4IPet5speakB5cxx11Ev,"axG",@progbits,_ZNK4IPet5speakB5cxx11Ev,comdat
	.size	_ZNK4IPet5speakB5cxx11Ev, .-_ZNK4IPet5speakB5cxx11Ev
	.section	.rodata
.LC1:
	.string	"Bark!"
	.section	.text._ZNK3Dog5speakB5cxx11Ev,"axG",@progbits,_ZNK3Dog5speakB5cxx11Ev,comdat
	.align 2
	.weak	_ZNK3Dog5speakB5cxx11Ev
	.type	_ZNK3Dog5speakB5cxx11Ev, @function
_ZNK3Dog5speakB5cxx11Ev:
.LFB1022:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1022
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-25(%rbp), %rdx
	movq	-40(%rbp), %rax
	movl	$.LC1, %esi
	movq	%rax, %rdi
.LEHB2:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE2:
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movq	-40(%rbp), %rax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L10
	jmp	.L12
.L11:
	movq	%rax, %rbx
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB3:
	call	_Unwind_Resume
.LEHE3:
.L12:
	call	__stack_chk_fail
.L10:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1022:
	.section	.gcc_except_table._ZNK3Dog5speakB5cxx11Ev,"aG",@progbits,_ZNK3Dog5speakB5cxx11Ev,comdat
.LLSDA1022:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1022-.LLSDACSB1022
.LLSDACSB1022:
	.uleb128 .LEHB2-.LFB1022
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L11-.LFB1022
	.uleb128 0
	.uleb128 .LEHB3-.LFB1022
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
.LLSDACSE1022:
	.section	.text._ZNK3Dog5speakB5cxx11Ev,"axG",@progbits,_ZNK3Dog5speakB5cxx11Ev,comdat
	.size	_ZNK3Dog5speakB5cxx11Ev, .-_ZNK3Dog5speakB5cxx11Ev
	.section	.text._ZN4IPetC2Ev,"axG",@progbits,_ZN4IPetC5Ev,comdat
	.align 2
	.weak	_ZN4IPetC2Ev
	.type	_ZN4IPetC2Ev, @function
_ZN4IPetC2Ev:
.LFB1026:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	$_ZTV4IPet+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1026:
	.size	_ZN4IPetC2Ev, .-_ZN4IPetC2Ev
	.weak	_ZN4IPetC1Ev
	.set	_ZN4IPetC1Ev,_ZN4IPetC2Ev
	.section	.text._ZN3DogC2Ev,"axG",@progbits,_ZN3DogC5Ev,comdat
	.align 2
	.weak	_ZN3DogC2Ev
	.type	_ZN3DogC2Ev, @function
_ZN3DogC2Ev:
.LFB1028:
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
	call	_ZN4IPetC2Ev
	movl	$_ZTV3Dog+16, %edx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1028:
	.size	_ZN3DogC2Ev, .-_ZN3DogC2Ev
	.weak	_ZN3DogC1Ev
	.set	_ZN3DogC1Ev,_ZN3DogC2Ev
	.text
	.globl	main
	.type	main, @function
main:
.LFB1023:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1023
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$104, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN3DogC1Ev
	leaq	-112(%rbp), %rax
	movq	%rax, -80(%rbp)
	leaq	-112(%rbp), %rax
	movq	%rax, -72(%rbp)
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4IPetC1Ev
	movq	-80(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	leaq	-64(%rbp), %rdx
	movq	-80(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rdx, %rdi
.LEHB4:
	call	*%rax
.LEHE4:
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
.LEHB5:
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE5:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
.LEHB6:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	-72(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	leaq	-64(%rbp), %rdx
	movq	-72(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rdx, %rdi
	call	*%rax
.LEHE6:
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
.LEHB7:
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE7:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
.LEHB8:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.LEHE8:
	movl	$0, %eax
	movq	-24(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L19
	jmp	.L22
.L20:
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB9:
	call	_Unwind_Resume
.LEHE9:
.L21:
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB10:
	call	_Unwind_Resume
.LEHE10:
.L22:
	call	__stack_chk_fail
.L19:
	addq	$104, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1023:
	.section	.gcc_except_table,"a",@progbits
.LLSDA1023:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1023-.LLSDACSB1023
.LLSDACSB1023:
	.uleb128 .LEHB4-.LFB1023
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB5-.LFB1023
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L20-.LFB1023
	.uleb128 0
	.uleb128 .LEHB6-.LFB1023
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB7-.LFB1023
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L21-.LFB1023
	.uleb128 0
	.uleb128 .LEHB8-.LFB1023
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB9-.LFB1023
	.uleb128 .LEHE9-.LEHB9
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB10-.LFB1023
	.uleb128 .LEHE10-.LEHB10
	.uleb128 0
	.uleb128 0
.LLSDACSE1023:
	.text
	.size	main, .-main
	.weak	_ZTV3Dog
	.section	.rodata._ZTV3Dog,"aG",@progbits,_ZTV3Dog,comdat
	.align 8
	.type	_ZTV3Dog, @object
	.size	_ZTV3Dog, 24
_ZTV3Dog:
	.quad	0
	.quad	_ZTI3Dog
	.quad	_ZNK3Dog5speakB5cxx11Ev
	.weak	_ZTV4IPet
	.section	.rodata._ZTV4IPet,"aG",@progbits,_ZTV4IPet,comdat
	.align 8
	.type	_ZTV4IPet, @object
	.size	_ZTV4IPet, 24
_ZTV4IPet:
	.quad	0
	.quad	_ZTI4IPet
	.quad	_ZNK4IPet5speakB5cxx11Ev
	.weak	_ZTI3Dog
	.section	.rodata._ZTI3Dog,"aG",@progbits,_ZTI3Dog,comdat
	.align 8
	.type	_ZTI3Dog, @object
	.size	_ZTI3Dog, 24
_ZTI3Dog:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS3Dog
	.quad	_ZTI4IPet
	.weak	_ZTS3Dog
	.section	.rodata._ZTS3Dog,"aG",@progbits,_ZTS3Dog,comdat
	.type	_ZTS3Dog, @object
	.size	_ZTS3Dog, 5
_ZTS3Dog:
	.string	"3Dog"
	.weak	_ZTI4IPet
	.section	.rodata._ZTI4IPet,"aG",@progbits,_ZTI4IPet,comdat
	.align 8
	.type	_ZTI4IPet, @object
	.size	_ZTI4IPet, 16
_ZTI4IPet:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS4IPet
	.weak	_ZTS4IPet
	.section	.rodata._ZTS4IPet,"aG",@progbits,_ZTS4IPet,comdat
	.type	_ZTS4IPet, @object
	.size	_ZTS4IPet, 6
_ZTS4IPet:
	.string	"4IPet"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1103:
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
	jne	.L25
	cmpl	$65535, -8(%rbp)
	jne	.L25
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L25:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1103:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1104:
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
.LFE1104:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
