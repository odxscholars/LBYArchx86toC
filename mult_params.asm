segment .text
	bits 64
	global summ
summ:
	push rsi
	push rbp
	mov rbp, rsp
	add rbp, 16
	add rbp, 8
		xor rax, rax
		mov eax, ecx
		add eax, edx
		add eax, r8d
		add eax, r9d
		mov esi, [rbp+32]
		add eax, esi
		mov esi, [rbp+40]
		add eax, esi
		mov esi, [rbp+48]
		add eax, esi
	

	pop rbp
	pop rsi
	ret