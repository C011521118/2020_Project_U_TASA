bits 64	;; x86_64

	
global	_add, _sub, _mul, _div, _mod

	
section .text

	;; ABI for gcc
	
	;; rax : for return value
	;; rdi : used to pass 1st argument to functions
	;; rsi : used to pass 2nd argument to functions
	;; rdx : used to pass 3rd argument to functions
	;; rcx : used to pass 4th argument to functions
	
_add:				; int _add(int a, int b);
	mov	rax,rdi
	add	rax,rsi
	ret

_sub:				; int _sub(int a, int b);
	mov	rax,rdi
	sub	rax,rsi
	ret

_mul:				; int _mul(int a, int b);
	mov	rax,rdi
	mul	rsi
	ret
	
_div:				; int _div(int a, int b);
	mov 	rax,rdi
	mov	rdx,0x00
	div	rsi
	ret

_mod:				; int _mod(int a, int b);
	mov	rax,rdi
	mov	rdx,0x00
	div	rsi
	mov	rax,rdx
	ret
