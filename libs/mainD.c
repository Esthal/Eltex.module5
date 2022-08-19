#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>




int main(int argc, char const *argv[])
{
	if(argc < 3){
		printf("try: ./mainStatic <first number> <second number>\n");
		exit(1);
	}
	int one = atoi(argv[1]);
	int two = atoi(argv[2]);
	printf("Dynamic lib 4 var\n");


	void *library_handler = dlopen("libcalc.so", RTLD_LAZY);
	if(!library_handler){
		fprintf(stderr, "error: %s\n",dlerror());
		exit(1);
	}
	int(*ptr_modulo)(int,int) = NULL;
	int(*ptr_devisible)(int,int) = NULL;
	ptr_modulo = dlsym(library_handler, "modulo");
	ptr_devisible = dlsym(library_handler, "devisible");


	printf("%d%%%d = %d\n", one,two,ptr_modulo(one,two));
	printf("%d/%d = %d\n", one,two,ptr_devisible(one,two));


	
	return 0;
}