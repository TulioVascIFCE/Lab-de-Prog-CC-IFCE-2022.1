/* Nome: Túlio de Oliveira VAsconcelos */

//Cabeçalho - Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Aleatório entre 0 e (INTERVALO - 1)
#define INTERVALO 100 

int main (int argc, char *argv[]){
	//Declarando Variáveis
	int *vtA = NULL, *vtB = NULL, tam, count = 0;

	if (argc != 2){
		printf("Uso incorreto. O usuário deve entrar com 1 argumento (inteiro).\nAs dimnsões do vetor devem ser positivas e não nulas.\nExemplo:\n./prog.e 2[tam]\nObs: Ignore os [.] na entrada.\n");
		exit(1);
	}
	
	tam = atoi(*(argv + 1));

	if (tam <= 0){
		printf("Uso incorreto. O usuário deve entrar com 1 argumento (inteiro).\nAs dimnsões do vetor devem ser positivas e não nulas.\nExemplo:\n./prog.e 2[tam]\nObs: Ignore os [.] na entrada.\n");
		exit(2);
	}
	
	vtA = malloc(tam * sizeof(int));
	if (!vtA){
		puts("Não foi possível alocar a memoria desejada");
		exit(3);
	}

	//Gerando A e contando os pares
	srand(time(NULL));
	for (int k = 0; k < tam; k++){
		*(vtA + k) = rand() % INTERVALO;
		if(!(*(vtA + k) % 2)) count++;
	}

	if (count == 0){
		printf("Não há pares no vetor A\n");
		exit (4);
	}

	vtB = calloc(count, sizeof(int));
	if (!vtA){
		puts("Não foi possível alocar a memoria desejada");
		exit(5);
	}

	//Alocando os pares em B
	int aux = 0;
	for(int j = 0; j < tam; j++)
		if(!(*(vtA + j) % 2)){
			*(vtB + aux) = *(vtA + j);
			aux++;
		}

	puts("Resultados");
	
	puts("Vetor Original:");
	for (int k = 0; k < tam; k++) printf("%d\t", *(vtA + k));
	puts("");

	puts("Vetor dos Pares:");
	for (int k = 0; k < count; k++)	printf("%d\t", *(vtB + k));
	puts("");

	free(vtA);
	free(vtB);
	
	return (0);
}