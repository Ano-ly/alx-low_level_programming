section .data
	printstring db "Hello, Holberton", 10

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, printstring
	call printf
	add rsp, 8
	mov rax, 60
	xor rdi, rdi
	syscall
