
static:
	gcc -c modulo.c
	gcc -c devisible.c
	ar rc libcalc.a modulo.o devisible.o
	gcc main.c -o main -L. -lcalc
	./main 23 7



clean:
	rm main modulo.o devisible.o libcalc.*