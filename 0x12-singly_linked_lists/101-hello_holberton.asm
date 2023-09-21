; function declart
	extern	printf	; printf c function to print string
	section .value	; la section
msg:	db "Hello, Holberton", 0
fmt:	db "%s",10,0	; Retour à la ligne de printf
	section .code	; la section de ode
	global main	; for gcc
main:			; program label
	push	rbp		
	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0		
	call	printf	; appel de la fonction
	pop	rbp
	mov	rax,0	
	ret	; return

