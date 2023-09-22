	.file	"testing2.c"
	.text
	.section	.rodata
.LC0:
	.string	"Anne"
.LC1:
	.string	"Colton"
.LC2:
	.string	"Corbin"
.LC3:
	.string	"Daniel"
.LC4:
	.string	"Danton"
.LC5:
	.string	"David"
.LC6:
	.string	"Gary"
.LC7:
	.string	"Holden"
.LC8:
	.string	"Ian"
.LC9:
	.string	"Jay"
.LC10:
	.string	"Jennie"
.LC11:
	.string	"Jimmy"
.LC12:
	.string	"Justin"
.LC13:
	.string	"Kalson"
.LC14:
	.string	"Kina"
.LC15:
	.string	"Matthew"
.LC16:
	.string	"Max"
.LC17:
	.string	"Michael"
.LC18:
	.string	"Ntuj"
.LC19:
	.string	"Philip"
.LC20:
	.string	"Richard"
.LC21:
	.string	"Samantha"
.LC22:
	.string	"Stuart"
.LC23:
	.string	"Swati"
.LC24:
	.string	"Timothy"
.LC25:
	.string	"Victor"
.LC26:
	.string	"Walton"
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
	subq	$16, %rsp
	movq	$0, -8(%rbp)
	leaq	-8(%rbp), %rax
	leaq	.LC0(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC1(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC2(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC3(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC4(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC5(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC6(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC7(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC8(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC8(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC9(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC10(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC11(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC12(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC13(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC14(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC15(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC16(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC17(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC18(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC19(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC20(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC21(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC22(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC23(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC24(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC25(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-8(%rbp), %rax
	leaq	.LC26(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	print_list@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Debian 11.3.0-5) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
