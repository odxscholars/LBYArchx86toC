; Member 1: Shem Matthew J. Salih
; Member 2: Luis Gabriel Roxas


section .data
zero_val dq 0
section .text
bits 64
default rel
global asm_dot_product

; first vec is in rcx
; second vec is in rdx
; n is in R8
asm_dot_product: 
    mov rax, 0
    xorps xmm0, xmm0




    dot_prod_calc:
    cmp rax, r8
    JE FINIS
    movss xmm1, [rcx + rax*4]
    movss xmm5, [rdx + rax*4]
    mulss xmm1, xmm5
    addss xmm0, xmm1
    inc rax
    JMP dot_prod_calc


    FINIS:
    ret 