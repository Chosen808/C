	.file	"question.c"
	.text
	.section	.rodata
.LC0:
	.string	"foo = %d \n"
.LC1:
	.string	"bar = %d \n"
.LC2:
	.string	"a = %d \n"
.LC3:
	.string	"j = %d \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$0, -20(%rbp)
	movl	$0, -16(%rbp)
	movl	$0, -12(%rbp)
	jmp	.L2
.L3:
	addl	$1, -20(%rbp)
	movl	-20(%rbp), %eax
	addl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L2:
	cmpl	$16, -20(%rbp)
	jle	.L3
	movl	$0, -20(%rbp)
	jmp	.L4
.L5:
	movl	-20(%rbp), %eax
	addl	%eax, -12(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -20(%rbp)
.L4:
	cmpl	$16, -20(%rbp)
	jle	.L5
	movw	$-1, -22(%rbp)
	movzwl	-22(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movzwl	-22(%rbp), %eax
	sall	$4, %eax
	movl	%eax, %edx
	movzwl	-22(%rbp), %eax
	xorl	%edx, %eax
	notl	%eax
	movw	%ax, -22(%rbp)
	movzwl	-22(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -8(%rbp)
.L6:
	addl	$1, -8(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L6
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
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
