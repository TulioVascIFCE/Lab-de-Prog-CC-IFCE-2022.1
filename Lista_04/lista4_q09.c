#include <stdio.h>
#include <time.h>

#define TAMANHO 100

void bubbleSort (char *, int);

int main () {
	char vetor [TAMANHO];

	srand (time (NULL));

	for (int k = 0; k < TAMANHO; k++)
		*(vetor + k) = '!' + (rand () % 94);

	bubbleSort (vetor, TAMANHO);

	for (int k = 0; k < TAMANHO; k++)
		printf("%c ", *(vetor + k));

	puts ("");
	
	return 0;
}

void bubbleSort (char *A, int n) {
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
}