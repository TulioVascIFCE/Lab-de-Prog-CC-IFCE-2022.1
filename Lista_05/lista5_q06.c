#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INTERVALO 10

void funcaoOrdenar(int *, int);

float funcaoMedia(int *, int);
float funcaoMediana(int *, int);

int funcaoModa(int *, int);

int main (int argc, char *argv[]) {
	int tam;
	int *vt = NULL;

	tam = atoi(*(argv + 1));
	vt = malloc(tam * sizeof(int));
	if (!vt) {
		puts("Não foi possível alocar a memória desejada.");
		exit(1);
	}

	puts("Vetor:");
	srand(time(NULL));
	for (int k = 0; k < tam; k++){
		*(vt + k) = (rand() % INTERVALO);
		printf("%d\t", *(vt + k));
	}
	puts("");

	puts("Vetor Odenado:");
	funcaoOrdenar(vt, tam);
	for (int k = 0; k < tam; k++) printf("%d\t", *(vt + k));
	puts("");
	
	puts("Média:");
	funcaoMedia(vt, tam);
	puts("Meidana:");
	funcaoMediana(vt, tam);
	puts("Moda:");
	funcaoModa(vt, tam);
	puts("");
	
	free(vt);
	
	return (0);
}

void funcaoOrdenar(int *X, int n){
	int aux;
	for (int i = 0; i < n-1; i++)
		for (int j = n-1; j > i; j--)
			if (*(X +j) < *(X + j -1)){
				aux = *(X +j);
				*(X +j) = *(X + j -1);
				*(X + j -1) = aux;
			}
}

float funcaoMedia(int *X, int n){
	int soma = 0;
	for (int k = 0; k < n; k++) soma += *(X + k);
	return printf("%.2f\n", (float)soma/n);
}

float funcaoMediana(int *X, int n){
	if (n%2) return printf("%.0f\n", (float)*(X + (n/2)));
	else return printf("%.2f\n", ((float)*(X + (n/2 - 1)) + *(X + (n/2)))/2);
}

int funcaoModa(int *X, int n){
	int *Y, max, pos;
	Y = calloc(INTERVALO, sizeof(int));
	if (!Y) {
		puts("Não foi possível alocar a memória desejada para calcular a Moda.");
		exit(1);
	}
	for (int k = 0; k < n; k++) (*(Y + *(X + k)))++;
	max = *Y;
	pos = 0;
	for (int k = 1; k < INTERVALO; k++)
		if (max <= *(Y + k)){
			max = *(Y + k);
			pos = k;
		}
	free(Y);
	return printf("%d\n", pos); 
}