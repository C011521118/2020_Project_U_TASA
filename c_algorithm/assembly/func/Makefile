a.out: obj
	gcc -g func.o main.o

obj: func.asm main.c
	nasm -f elf64 func.asm
	gcc -c main.c
