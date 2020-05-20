bits 64	;; x86_64

	
extern	_print_rslt
global	_odd_or_even

	
section .text

	;; ABI for gcc
	
	;; rax : for return value
	;; rdi : used to pass 1st argument to functions
	;; rsi : used to pass 2nd argument to functions
	;; rdx : used to pass 3rd argument to functions
	;; rcx : used to pass 4th argument to functions
	
_odd_or_even:			; void _odd_or_even(int num);
	mov	rax,rdi
	mov	rbx,rdi
	mov	rdx,0x00
	mov	rcx,0x02
	div 	rcx
	cmp	rdx,0x00
	je	_even
	jmp	_odd

_even:
	mov	rdi,rbx
	mov	rsi,0x01
	call	_print_rslt
	ret

_odd:
	mov	rdi,rbx
	mov	rsi,0x00
	call	_print_rslt
	ret
