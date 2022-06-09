/* Nome: Túlio de Oliveira VAsconcelos */

//Cabeçalho - Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Aleatório entre 0 e (INTERVALO - 1)
#define INTERVALO 100 

//Funções utilizadas
void bubbleSort (int *V, int n);

int main (int argc, char *argv[]){
	//Declarando Variáveis
	int *vtA = NULL, tam;

	if (argc != 2){
		printf("Uso incorreto. O usuário deve entrar com 1 argumento (inteiro).\nAs dimnsões do vetor devem ser positivas e não nulas.\nExemplo:\n./lista5_q08.e 2[tam]\nObs: Ignore os [.] na entrada.\n");
		exit(1);
	}
	
	tam = atoi(*(argv + 1));

	if (tam <= 0){
		printf("Uso incorreto. O usuário deve entrar com 1 argumento (inteiro).\nAs dimnsões do vetor devem ser positivas e não nulas.\nExemplo:\n./lista5_q08.e 2[tam]\nObs: Ignore os [.] na entrada.\n");
		exit(2);
	}
	
	vtA = malloc(tam * sizeof(int));
	if (!vtA){
		puts("Não foi possível alocar a memoria desejada");
		exit(3);
	}

	srand(time(NULL));
	for (int k = 0; k < tam; k++) *(vtA + k) = rand() % INTERVALO;

	bubbleSort (vtA, tam);
	
	puts("Vetor:");
	for (int k = 0; k < tam; k++) printf("%d\t", *(vtA + k));
	puts("");

	puts("Máximo:");
	printf("%d\t", *(vtA + tam - 1));
	puts("");

	free(vtA);
	
	return (0);
}

void bubbleSort (int *V, int n){
	int aux;
	for (int i = 0; i < (n - 1) ; i++){
		for (int j = (n - 1); j > i ; j--){
			if (*(V + j) < *(V + (j - 1))){
				aux = *(V + j);
				*(V + j) = *(V + (j - 1));
				*(V + (j - 1)) = aux;
			}
		}
	}
}