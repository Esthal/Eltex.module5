#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include "my_lib.h"


int main(int argc, char const *argv[])
{
	if(argc < 3){
		printf("try: ./mainStatic <first number> <second number>\n");
		exit(1);
	}
	int one = atoi(argv[1]);
	int two = atoi(argv[2]);
	printf("Lib 4 var\n");
	printf("%d%%%d = %d\n", one,two,modulo(one,two));
	printf("%d/%d = %d\n", one,two,devisible(one,two));

	
	return 0;
}