#include <stdio.h>
#include <time.h>

#define TAMANHO 100

int selectionSort (int *A, int n);
int bubbleSort (int *A, int n);

int main (){
	//Variáveis:
	int vetor[TAMANHO], min_int, max_int;
	
	//Leitura de dados - Aleatório (Selection Sort):
	puts ("Defina o valor mínimo do intervalo:");
	scanf("%d", &min_int);
	puts ("Defina o valor máximo do intervalo:");
	scanf("%d", &max_int);
	srand (time (NULL));
	for (int i = 0; i < TAMANHO; i++){
		* (vetor + i) = min_int + (rand () % ((max_int + 1) - min_int));
		printf ("%d\t", * (vetor + i));
		if(((((i + 1) % 10) == 0) && (i > 0)) || (i == 99)) printf("\n");
	}
	
	//Saída de dados - Selection Sort:
	*vetor = selectionSort(vetor, TAMANHO);
	puts ("Vetor ordenado por método de seleção:");
	for (int i = 0; i < TAMANHO; i++){
		printf ("%d\t", * (vetor + i));
		if(((((i + 1) % 10) == 0) && (i > 0)) || (i == 99)) printf("\n");
	}
	
	//Saída de dados - Bubble Sort:
	*vetor = selectionSort(vetor, TAMANHO);
	puts ("Vetor ordenado por método bubble:");
	for (int i = 0; i < TAMANHO; i++){
		printf ("%d\t", * (vetor + i));
		if(((((i + 1) % 10) == 0) && (i > 0)) || (i == 99)) printf("\n");
	}
		
	//Fim do Programa
	return 0;
}

int selectionSort (int *A, int n){
	int menor, aux;
	for (int i = 0; i < n ; i++){
		menor = i;
		for (int j = i + 1; j < n ; j++){
			if (*(A + j) < *(A + menor)) menor = j;
		}
		aux = *(A + i);
		*(A + i) = *(A + menor);
		*(A + menor) = aux;
		}
	return *A;
}

int bubbleSort (int *A, int n){
	int aux;
	for (int i = 0; i < (n - 1) ; i++){
		for (int j = (n - 1); j > i ; j--){
			if (*(A + j) < *(A + (j - 1))){
				aux = *(A + j);
				*(A + j) = *(A + (j - 1));
				*(A + (j - 1)) = aux;
			}
		}
	}
	return *A;
}