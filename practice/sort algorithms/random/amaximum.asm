	.file	"amaximum.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"How many numbers are you entering: "
.LC1:
	.string	"%d"
.LC2:
	.string	"\n"
.LC3:
	.string	"Please enter number #%d \n"
	.align 8
.LC4:
	.string	"%d is greater than %d and %d \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	-397312(%rsp), %r11
.LPSRL0:
	subq	$4096, %rsp
	orq	$0, (%rsp)
	cmpq	%r11, %rsp
	jne	.LPSRL0
	subq	$2736, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-400036(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, -400032(%rbp)
	jmp	.L2
.L3:
	movl	-400032(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-400032(%rbp), %eax
	subl	$1, %eax
	leaq	-400016(%rbp), %rdx
	cltq
	salq	$2, %rax
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	addl	$1, -400032(%rbp)
.L2:
	movl	-400036(%rbp), %eax
	cmpl	%eax, -400032(%rbp)
	jle	.L3
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$0, -400028(%rbp)
	jmp	.L4
.L8:
	movl	-400028(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -400024(%rbp)
	jmp	.L5
.L7:
	movl	-400024(%rbp), %eax
	cltq
	movl	-400016(%rbp,%rax,4), %edx
	movl	-400028(%rbp), %eax
	cltq
	movl	-400016(%rbp,%rax,4), %eax
	cmpl	%eax, %edx
	jle	.L6
	movl	-400024(%rbp), %eax
	cltq
	movl	-400016(%rbp,%rax,4), %eax
	movl	%eax, -400020(%rbp)
	movl	-400028(%rbp), %eax
	cltq
	movl	-400016(%rbp,%rax,4), %edx
	movl	-400024(%rbp), %eax
	cltq
	movl	%edx, -400016(%rbp,%rax,4)
	movl	-400028(%rbp), %eax
	cltq
	movl	-400020(%rbp), %edx
	movl	%edx, -400016(%rbp,%rax,4)
.L6:
	addl	$1, -400024(%rbp)
.L5:
	movl	-400036(%rbp), %eax
	cmpl	%eax, -400024(%rbp)
	jl	.L7
	addl	$1, -400028(%rbp)
.L4:
	movl	-400036(%rbp), %eax
	cmpl	%eax, -400028(%rbp)
	jl	.L8
	movl	-400008(%rbp), %ecx
	movl	-400012(%rbp), %edx
	movl	-400016(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L10
	call	__stack_chk_fail@PLT
.L10:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
