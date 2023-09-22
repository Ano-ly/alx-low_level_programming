section .data
	printstring db "Hello, Holberton", 10
	nextstring db "", 10

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, printstring
	call printf
	call printf
	add rsp, 8
	mov rax, 60
	xor rdi, rdi
	syscall
section .note.GNU-stack
