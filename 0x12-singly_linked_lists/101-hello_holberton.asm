extern printf
section .data
	line: db "Hello, Holberton", 0
	format: db "%s", 10, 0

section .text
	global main
main:
	push rbp
	mov rdi,format
	mov rsi,line
	mov rax,0
	call printf

	pop rbp
	mov rax,0
	ret
