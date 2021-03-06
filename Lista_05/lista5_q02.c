#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
	int *vt = NULL, tam, aux;

    tam = atoi(argv[1]);

	vt = malloc(tam * sizeof(int));
	if (!vt){
		puts("Falha na solitação de memória!");
		exit(1);
	}

	srand(time(NULL));
	for (int k = 0; k < tam; k++) *(vt + k) = rand() % 1000;

	for (int i = 0; i < tam - 1; i++)
		for (int j = tam - 1; j > i; j-- )
			if (*(vt + j) < *(vt + j - 1)){
				aux = *(vt + j);
				*(vt + j) = *(vt + j - 1);
				*(vt + j - 1) = aux;
			}

	for (int k = 0; k < tam; k++) printf("%d\t", *(vt + k));
	puts("");
	
	printf("Menor: %d - Endereço: %p\n", *vt, vt);
	
    free(vt);
	
    return 0;
}