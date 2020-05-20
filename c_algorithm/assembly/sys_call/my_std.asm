;; location of system call number:
;;     /usr/include/x86_64-linux-gnu/asm/unistd_64.h

	
bits 64	   ;; x86_64


extern	_asm_mod
global	_asm_printf, _asm_exit
global	_prime_num

	
section .text
	
_asm_printf:			; void _asm_printf(void *str, int len)
	
	mov	rdx,rsi		; set message length
	mov	rsi,rdi		; set message
	mov	rax,1		; use the write syscall
	mov	rdi,1		; write to stdout
	syscall			; make system call
	ret

	
_asm_exit:			; void _asm_exit(void);
	
	mov	rax,60		; use the exit syscall
	mov	rdi,0		; error code 0
	syscall			; make syscall

	
_prime_num:			; int _prime_num(int num);
	
	cmp	rdi,1		; flag 1 when the argument is 1 or 2
	je	_flag_0
	cmp	rdi,2
	je	_flag_0
	
	mov	rbx,rdi		; save the argument
	mov	rsi,2
_loop:
	call	_asm_mod	; call _asm_mod
	cmp	rax,0		; rdi % rsi == 0
	je	_flag_1		; if true : flag 1

	add	rsi,1		; rsi++
	cmp	rsi,rbx	
	je	_flag_0

	mov	rdi,rbx
	jmp	_loop

_flag_0:
	mov	rax,0
	ret
_flag_1:
	mov	rax,1
	ret
