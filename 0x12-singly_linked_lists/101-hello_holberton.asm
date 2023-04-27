section .data
	hello db "Hello, Holberton", 0Ah

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	lea rdi, [hello]
	mov rax, 0
	call printf

	mov rsp, rbp
	pop rbp

	xor eax, eax
	ret
