a.out: obj
	gcc -g calc.o main.o

obj: calc.asm main.c
	nasm -f elf64 calc.asm
	gcc -c main.c
