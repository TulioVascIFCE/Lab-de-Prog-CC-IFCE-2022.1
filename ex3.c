
#include <stdio.h>
#include <stdlib.h>

char * conjuntos(char);

int main(int argc, char *argv[]){
    char operacao;

    inteiro = atoi(argv[1]);

	printf("%d\n", somaDeNumerosInteirosConsecutivos(inteiro));

    return 0;
}

int somaDeNumerosInteirosConsecutivos(int a){
	int sequencias = 0, count = 0;
	
	for (int i = a; i > 1; i--)
		for (int j = 0; j < i; j++){
			if ((2 * i + j)*(j + 1) == (2*a)) sequencias++;
		}

	printf("%d\n", count);
	
	return sequencias;
}