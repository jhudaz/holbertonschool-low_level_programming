section	.text
   global _start

_start:	            ;linker entry
   mov	edx,len     ;length of the string
   mov	ecx,msg     ;write the message
   mov	ebx,1       ;stdout
   mov	eax,4       ;call the write function
   int	0x80        ;call kernel system

   mov	eax,1       ;call exit
   int	0x80        ;call kernel

section	.data
msg db 'Hello, Holberton', 0xa  ;string
len equ $ - msg     ;length of the string