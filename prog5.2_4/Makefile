prog: prog.o fun.o Makefile
		gcc -o prog prog.o fun.o
fun.o: fun.c fun.h Makefile
		gcc -c fun.c
prog.o: prog.c fun.h Makefile
		gcc -c prog.c
