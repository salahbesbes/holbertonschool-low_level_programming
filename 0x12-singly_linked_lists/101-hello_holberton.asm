
SECTION .data:
	arg1	db "Hello, Holberton", 0
	fmt     db "%s", 0xA, 0

SECTION .text
extern printf
global main

main:
	mov esi, arg1
	mov rdi, fmt
	mov eax, 0
	call printf


	mov ebx, 0
	mov eax, 1
	int 0x80
