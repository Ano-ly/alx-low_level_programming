section .data
	printstring db "Hello, Holberton", 10, 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, printstring
	call printf
	pop rbp
	mov rax, 60
	xor rdi, rdi
	syscall

