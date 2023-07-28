section .text
	global _start

_start:
	; Call printf with the address of format and address of 'Hello, Holberton' string
	mov rdi, format
	mov rsi, Hello Holberton
	xor rax, rax
	call printf

	xor rdi, rdi
	mov rax, 60
	syscall
section .data
	Hello db 
