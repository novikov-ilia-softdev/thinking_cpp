	.file	"main.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.text
	.align 2
	.globl	_ZN7MessageC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.type	_ZN7MessageC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, @function
_ZN7MessageC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
.LFB1022:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1022:
	.size	_ZN7MessageC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .-_ZN7MessageC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.globl	_ZN7MessageC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.set	_ZN7MessageC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,_ZN7MessageC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.section	.rodata
.LC0:
	.string	"void Message::print() const"
	.text
	.align 2
	.globl	_ZNK7Message5printEv
	.type	_ZNK7Message5printEv, @function
_ZNK7Message5printEv:
.LFB1024:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPFRSoS_E
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1024:
	.size	_ZNK7Message5printEv, .-_ZNK7Message5printEv
	.section	.rodata
	.align 8
.LC1:
	.string	"void Message::print( const std::string& message) const"
.LC2:
	.string	" "
	.text
	.align 2
	.globl	_ZNK7Message5printERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.type	_ZNK7Message5printERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, @function
_ZNK7Message5printERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
.LFB1025:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movq	-24(%rbp), %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movl	$.LC2, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rbx, %rsi
	movq	%rax, %rdi
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPFRSoS_E
	nop
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1025:
	.size	_ZNK7Message5printERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .-_ZNK7Message5printERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.section	.text._ZN7MessageD2Ev,"axG",@progbits,_ZN7MessageD5Ev,comdat
	.align 2
	.weak	_ZN7MessageD2Ev
	.type	_ZN7MessageD2Ev, @function
_ZN7MessageD2Ev:
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
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1028:
	.size	_ZN7MessageD2Ev, .-_ZN7MessageD2Ev
	.weak	_ZN7MessageD1Ev
	.set	_ZN7MessageD1Ev,_ZN7MessageD2Ev
	.section	.rodata
.LC3:
	.string	"message"
.LC4:
	.string	"hello!"
.LC5:
	.string	"wow!"
.LC6:
	.string	"bye!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1026:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1026
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$200, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-193(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-193(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movl	$.LC3, %esi
	movq	%rax, %rdi
.LEHB0:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE0:
	leaq	-64(%rbp), %rdx
	leaq	-192(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB1:
	call	_ZN7MessageC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE1:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
.LEHB2:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.LEHE2:
	leaq	-193(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	leaq	-193(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-193(%rbp), %rdx
	leaq	-160(%rbp), %rax
	movl	$.LC4, %esi
	movq	%rax, %rdi
.LEHB3:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE3:
	leaq	-160(%rbp), %rdx
	leaq	-192(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB4:
	call	_ZNK7Message5printERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE4:
	leaq	-160(%rbp), %rax
	movq	%rax, %rdi
.LEHB5:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.LEHE5:
	leaq	-193(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	leaq	-192(%rbp), %rax
	movq	%rax, %rdi
.LEHB6:
	call	_ZNK7Message5printEv
.LEHE6:
	leaq	-193(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-193(%rbp), %rdx
	leaq	-96(%rbp), %rax
	movl	$.LC5, %esi
	movq	%rax, %rdi
.LEHB7:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE7:
	leaq	-96(%rbp), %rdx
	leaq	-128(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB8:
	call	_ZN7MessageC1ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE8:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
.LEHB9:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.LEHE9:
	leaq	-193(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	leaq	-193(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-193(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movl	$.LC6, %esi
	movq	%rax, %rdi
.LEHB10:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE10:
	leaq	-64(%rbp), %rdx
	leaq	-128(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB11:
	call	_ZNK7Message5printERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
.LEHE11:
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
.LEHB12:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.LEHE12:
	leaq	-193(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
.LEHB13:
	call	_ZNK7Message5printEv
.LEHE13:
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
.LEHB14:
	call	_ZN7MessageD1Ev
.LEHE14:
	leaq	-192(%rbp), %rax
	movq	%rax, %rdi
.LEHB15:
	call	_ZN7MessageD1Ev
.LEHE15:
	movl	$0, %eax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L19
	jmp	.L32
.L21:
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L8
.L22:
	movq	%rax, %rbx
	leaq	-192(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN7MessageD1Ev
	jmp	.L8
.L20:
	movq	%rax, %rbx
.L8:
	leaq	-193(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB16:
	call	_Unwind_Resume
.LEHE16:
.L24:
	movq	%rax, %rbx
	leaq	-160(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L11
.L23:
	movq	%rax, %rbx
.L11:
	leaq	-193(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	jmp	.L12
.L27:
	movq	%rax, %rbx
	leaq	-96(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L14
.L28:
	movq	%rax, %rbx
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN7MessageD1Ev
	jmp	.L14
.L26:
	movq	%rax, %rbx
.L14:
	leaq	-193(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	jmp	.L12
.L30:
	movq	%rax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L17
.L29:
	movq	%rax, %rbx
.L17:
	leaq	-193(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	jmp	.L18
.L31:
	movq	%rax, %rbx
.L18:
	leaq	-128(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN7MessageD1Ev
	jmp	.L12
.L25:
	movq	%rax, %rbx
.L12:
	leaq	-192(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN7MessageD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB17:
	call	_Unwind_Resume
.LEHE17:
.L32:
	call	__stack_chk_fail
.L19:
	addq	$200, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1026:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1026:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1026-.LLSDACSB1026
.LLSDACSB1026:
	.uleb128 .LEHB0-.LFB1026
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L20-.LFB1026
	.uleb128 0
	.uleb128 .LEHB1-.LFB1026
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L21-.LFB1026
	.uleb128 0
	.uleb128 .LEHB2-.LFB1026
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L22-.LFB1026
	.uleb128 0
	.uleb128 .LEHB3-.LFB1026
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L23-.LFB1026
	.uleb128 0
	.uleb128 .LEHB4-.LFB1026
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L24-.LFB1026
	.uleb128 0
	.uleb128 .LEHB5-.LFB1026
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L23-.LFB1026
	.uleb128 0
	.uleb128 .LEHB6-.LFB1026
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L25-.LFB1026
	.uleb128 0
	.uleb128 .LEHB7-.LFB1026
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L26-.LFB1026
	.uleb128 0
	.uleb128 .LEHB8-.LFB1026
	.uleb128 .LEHE8-.LEHB8
	.uleb128 .L27-.LFB1026
	.uleb128 0
	.uleb128 .LEHB9-.LFB1026
	.uleb128 .LEHE9-.LEHB9
	.uleb128 .L28-.LFB1026
	.uleb128 0
	.uleb128 .LEHB10-.LFB1026
	.uleb128 .LEHE10-.LEHB10
	.uleb128 .L29-.LFB1026
	.uleb128 0
	.uleb128 .LEHB11-.LFB1026
	.uleb128 .LEHE11-.LEHB11
	.uleb128 .L30-.LFB1026
	.uleb128 0
	.uleb128 .LEHB12-.LFB1026
	.uleb128 .LEHE12-.LEHB12
	.uleb128 .L29-.LFB1026
	.uleb128 0
	.uleb128 .LEHB13-.LFB1026
	.uleb128 .LEHE13-.LEHB13
	.uleb128 .L31-.LFB1026
	.uleb128 0
	.uleb128 .LEHB14-.LFB1026
	.uleb128 .LEHE14-.LEHB14
	.uleb128 .L25-.LFB1026
	.uleb128 0
	.uleb128 .LEHB15-.LFB1026
	.uleb128 .LEHE15-.LEHB15
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB16-.LFB1026
	.uleb128 .LEHE16-.LEHB16
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB17-.LFB1026
	.uleb128 .LEHE17-.LEHB17
	.uleb128 0
	.uleb128 0
.LLSDACSE1026:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1106:
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
	jne	.L35
	cmpl	$65535, -8(%rbp)
	jne	.L35
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L35:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1106:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__ZN7MessageC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, @function
_GLOBAL__sub_I__ZN7MessageC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
.LFB1107:
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
.LFE1107:
	.size	_GLOBAL__sub_I__ZN7MessageC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE, .-_GLOBAL__sub_I__ZN7MessageC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__ZN7MessageC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
