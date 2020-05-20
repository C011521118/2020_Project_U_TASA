a.out: obj
	gcc -g main.o my_std.o calc.o

obj: main.c my_std.asm calc.asm
	nasm -f elf64 my_std.asm
	nasm -f elf64 calc.asm
	gcc -c main.c
