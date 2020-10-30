SECTION .data
	message: db "Hello, Holberton", 0
	format:  db "%s", 0xA, 0

SECTION .text
extern printf
global main

main:
	mov esi, message
	mov rdi, format
	mov eax, 0
	call printf


	mov ebx, 0
	mov eax, 1
	int 0x80

