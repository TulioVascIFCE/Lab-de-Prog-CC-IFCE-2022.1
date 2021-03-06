// gcc lista5_q07.c -o lista5_q07.e -lm
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define INTERVALO 100

 float erroQuad(float *, float *, int n);

int main (int argc, char *argv[]) {
	int tam;
	float *vta, *vtb;

	tam = atoi(*(argv + 1));
	vta = malloc(tam * sizeof(float));
	vtb = malloc(tam * sizeof(float));
	if (!vta || !vtb){
		puts("Erro de alocação de memória");
		exit(1);
	}
	srand(time(NULL));
	for(int k = 0; k < tam; k++){
		if (k == 0) puts("Vetor A:");
		*(vta + k) = (rand() % INTERVALO) + (float)(rand() % INTERVALO)/100;
		printf("%.2f\t", *(vta + k));
	}
	puts("");
	for(int k = 0; k < tam; k++){
		if (k == 0) puts("Vetor B:");
		*(vtb + k) = (rand() % INTERVALO) + (float)(rand() % INTERVALO)/100;
		printf("%.2f\t", *(vtb + k));
	}
	puts("");
	erroQuad(vta, vtb, tam);
	puts("");
	return (0);
}

float erroQuad(float *A, float *B, int n){
	float sum = 0, eQuad;
	for (int k = 0; k < n; k++){
		sum += pow(*(A + k) - *(B + k), 2);
		if (k == 0) puts("Soma Quadrática Acumulada:");
		printf("%.2f\t", sum);
	}
	eQuad = sqrt((float) sum/n);
	return printf("\nErro Quadrátio Médio: %.2f", eQuad);
}