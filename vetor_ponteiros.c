#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 30
#define MN 10
#define RG 100

void selectionSort (int *A, int n);

int main(){
	int v[TAM], s = 0;
	int *pv;

	pv = v; //pv = &v[0];

	//srand(time(NULL));
	
	for (int k = 0; k < TAM; k++){
		//v[k] = MN + (rand() % RG);
		*(pv + k) = MN + (rand() % RG);
	}

	selectionSort(v, TAM);

	pv =v;
	
	for (int k = 0; k < TAM; k++){
		//s += v[k];
		s += *(pv + k);
	}
	
	puts("Vetor:");
	for (int k = 0; k < TAM; k++){
		printf("%d ",*(pv + k));
	}

	printf("\n\tSomatório: %d\n",s);
	
	return 0;
}

void selectionSort (int *A, int n){
	int menor, aux;
	for (int i = 0; i < n - 1 ; i++){
		menor = i;
		for (int j = i + 1; j < n ; j++){
			if (*(A + j) < *(A + menor)) menor = j;
		}
		aux = *(A + i);
		*(A + i) = *(A + menor);
		*(A + menor) = aux;
		}
}