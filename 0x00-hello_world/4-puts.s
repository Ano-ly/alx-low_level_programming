	.file	"4-puts.c"
	.intel_syntax noprefix
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 64
	movabs	rax, 7885065666585129552
	movabs	rdx, 7791354250703367785
	mov	QWORD PTR -64[rbp], rax
	mov	QWORD PTR -56[rbp], rdx
	movabs	rax, 7811904092961598313
	movabs	rdx, 7863391741191022948
	mov	QWORD PTR -48[rbp], rax
	mov	QWORD PTR -40[rbp], rdx
	movabs	rax, 7453010347691371637
	movabs	rdx, 8825495544226668917
	mov	QWORD PTR -32[rbp], rax
	mov	QWORD PTR -24[rbp], rdx
	mov	QWORD PTR -16[rbp], 25964
	mov	DWORD PTR -8[rbp], 0
	lea	rax, -64[rbp]
	mov	rdi, rax
	call	puts@PLT
	mov	eax, 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Debian 11.3.0-5) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
