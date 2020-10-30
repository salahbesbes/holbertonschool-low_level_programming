; this is a comment 
; created by salah besbes

section .data:
	fmt     db "%s", 10, 0
	arg1	db "Hello, Holberton", 0

section .text
	extern printf
	global main

	main:
		mov esi, arg1
		mov edi, fmt
		mov eax, 0
		call printf


		mov ebx, 0
		mov eax, 1

		int 0x80

    
