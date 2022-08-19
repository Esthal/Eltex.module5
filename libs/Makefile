

static: my_lib.h modulo.o devisible.o main.c
	ar rc libcalc.a modulo.o devisible.o
	gcc main.c -o main -L. -lcalc
	./main 23 7

dynamicS: my_lib.h modulo.o devisible.o main.c
	gcc -shared modulo.o devisible.o -o libcalc.so
	gcc main.c -o main -L. -lcalc
	LD_LIBRARY_PATH=${PWD}:${LD_LIBRARY_PATH} ./main 34 8

dynamic: modulo.o devisible.o mainD.c
	gcc -shared modulo.o devisible.o -o libcalc.so
	gcc mainD.c -o main -L. -ldl
	LD_LIBRARY_PATH=${PWD}:${LD_LIBRARY_PATH} ./main 43 7

modulo.o: modulo.c
	gcc -fPIC -c modulo.c

devisible.o: devisible.c
	gcc -fPIC -c devisible.c

clean:
	rm main modulo.o devisible.o libcalc.*