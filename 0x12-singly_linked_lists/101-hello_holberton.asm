section .data
	fmt: db "%s", 10, 0				;format
	msg: db	"Hello, Holberton", 0	;strings must be terminated with 0 in C
section .text
	extern printf	;we call printf function
	global main

	main:

	push	rbp	;base register operand

		mov	rsi, msg	;address of string to output
		mov	rdi, fmt	;used to pass 1st argument to functions
		mov	rax, 0		;when we call a syscal, rax must contain syscall number

		call printf		;printf(msg)

	pop	rbp

	mov	rax, 0

	ret	;return from main back into C library wrapper