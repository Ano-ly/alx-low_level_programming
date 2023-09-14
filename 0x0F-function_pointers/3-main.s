	.file	"3-main.c"
	.text
	.section	.rodata
.LC0:
	.string	"Error"
.LC1:
	.string	"+"
.LC2:
	.string	"-"
.LC3:
	.string	"/"
.LC4:
	.string	"%"
.LC5:
	.string	"*"
.LC6:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movl	%edi, -36(%rbp)
	movq	%rsi, -48(%rbp)
	cmpl	$4, -36(%rbp)
	je	.L2
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$98, %edi
	call	exit@PLT
.L2:
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	leaq	.LC1(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	je	.L3
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	leaq	.LC2(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	je	.L3
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	leaq	.LC3(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	je	.L3
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	je	.L3
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	leaq	.LC5(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	je	.L3
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$99, %edi
	call	exit@PLT
.L3:
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	leaq	.LC3(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	je	.L4
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L5
.L4:
	movq	-48(%rbp), %rax
	addq	$24, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi@PLT
	testl	%eax, %eax
	jne	.L5
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$100, %edi
	call	exit@PLT
.L5:
	movq	-48(%rbp), %rax
	addq	$16, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	get_op_func@PLT
	movq	%rax, -24(%rbp)
	movq	-48(%rbp), %rax
	addq	$24, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi@PLT
	movl	%eax, %ebx
	movq	-48(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	atoi@PLT
	movl	%eax, %edx
	movq	-24(%rbp), %rax
	movl	%ebx, %esi
	movl	%edx, %edi
	call	*%rax
	movl	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Debian 11.3.0-5) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
