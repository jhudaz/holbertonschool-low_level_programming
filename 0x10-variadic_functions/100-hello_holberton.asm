section .data
	msg db "Hello, Holberton", 10 ; string with a new line
section .text
	global main
	main:
	mov rax, 1 ; when we call a syscal, rax must contain syscall number
	mov rdi, 1 ; used to pass 1st argument to functions
	mov rsi, msg ; pointer used to pass 2nd argument to functions
	mov rdx, 17 ; when we call a syscal, rax must contain syscall number
	syscall
