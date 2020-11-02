extern printf
SECTION .data
	arg1 db "Hello, Holberton", 0
	fmt  db "%s", 10, 0

SECTION .text
	global main

main:
	push rbp
	mov rdi,fmt
	mov rsi,arg1
	mov rax,0
	call printf

	pop rbp
	mov rax,0
	ret
