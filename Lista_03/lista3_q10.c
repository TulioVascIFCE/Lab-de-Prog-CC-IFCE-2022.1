#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MN 1
#define RG 99

void buscaRepetidos (int *v, int x, int t);

int main(){
	int matriz[TAM][TAM], elemento;
	int *pv;

	pv = matriz;
	
	srand(time(NULL));
	
	for (int k = 0; k < TAM*TAM; k++){
		*(pv + k) = MN + (rand() % RG);
		//printf("%p\t%d\n", pv + k, *(pv + k));
	}
	puts("Entre com um número inteiro para procurar na matriz:");
	scanf("%d", &elemento);
		
	puts("Matriz:");
	for (int k = 0; k < TAM*TAM; k++){
		if ((k != 0) && ((k % TAM) == 0)) printf("\n");
		printf("%d\t",*(pv + k));
	}

	puts("");
	
	buscaRepetidos (matriz, elemento, TAM);
		
	return 0;
}

void buscaRepetidos (int *v, int x, int t){
	int count = 0;

	for (int k = 0; k < t*t; k++) if (*(v + k) == x) count++;

	printf("O número %d aparece %d vez(es)\n", x, count);
}