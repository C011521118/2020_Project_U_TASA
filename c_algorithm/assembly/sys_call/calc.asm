bits 64	;; x86_64


global	_asm_add, _asm_sub, _asm_mul, _asm_div, _asm_mod

	
section .text

	;; ABI for gcc
	
	;; rax : for return value
	;; rdi : used to pass 1st argument to functions
	;; rsi : used to pass 2nd argument to functions
	;; rdx : used to pass 3rd argument to functions
	;; rcx : used to pass 4th argument to functions
	
_asm_add:				; int _asm_add(int a, int b);
	mov	rax,rdi
	add	rax,rsi
	ret

_asm_sub:				; int _asm_sub(int a, int b);
	mov	rax,rdi
	sub	rax,rsi
	ret

_asm_mul:				; int _asm_mul(int a, int b);
	mov	rax,rdi
	mul	rsi
	ret
	
_asm_div:				; int _asm_div(int a, int b);
	mov 	rax,rdi
	mov	rdx,0x00
	div	rsi
	ret

_asm_mod:				; int _asm_mod(int a, int b);
	mov	rax,rdi
	mov	rdx,0x00
	div	rsi
	mov	rax,rdx
	ret
