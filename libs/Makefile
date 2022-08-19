
static:
	gcc -c modulo.c
	gcc -c devisible.c
	ar rc libcalc.a modulo.o devisible.o
	gcc main.c -o main -L. -lcalc
	./main 23 7

dynamicS:
	gcc -fPIC -c modulo.c
	gcc -fPIC -c devisible.c
	gcc -shared modulo.o devisible.o -o libcalc.so
	gcc main.c -o main -L. -lcalc
	LD_LIBRARY_PATH=${PWD}:${LD_LIBRARY_PATH} ./main 23 7

dynamic:
	gcc -fPIC -c modulo.c
	gcc -fPIC -c devisible.c
	gcc -shared modulo.o devisible.o -o libcalc.so
	gcc mainD.c -o main -L. -ldl
	LD_LIBRARY_PATH=${PWD}:${LD_LIBRARY_PATH} ./main 43 7

clean:
	rm main modulo.o devisible.o libcalc.*