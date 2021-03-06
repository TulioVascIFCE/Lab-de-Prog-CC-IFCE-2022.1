#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {
	int tam;
	float *vt = NULL, soma = 0;

	tam = atoi(*(argv + 1));
	vt = malloc(tam * sizeof(float));
	if (!vt) {
		puts("Não foi possível alocar a memória desejada.");
		exit(1);
	}

	puts("Vetor:");
	srand(time(NULL));
	for (int k = 0; k < tam; k++){
		*(vt + k) = (rand() % 100) + (float)(rand() % 100)/100;
		printf("%.2f\t", *(vt + k));
		soma += *(vt + k);
	}

	printf("\nSoma Acumulada: %.2f\n", soma);

	free(vt);
	return (0);
}