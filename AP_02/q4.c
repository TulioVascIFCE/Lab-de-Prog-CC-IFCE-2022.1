/* Nome: Túlio de Oliveira VAsconcelos */

//Cabeçalho - Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Aleatório entre 0 e (INTERVALO - 1)
#define INTERVALO 100 

/* *** Projeto da Função *** */
void binaria(int *, int *, int, int);

int main () {
	//Declarando Variáveis
	int *vetor_X, *vetor_Y;
	int vTam, limiar;

	puts("Qual tamanho do vetor X?");
	scanf("%d", &vTam);
	
	vetor_X = malloc(vTam * sizeof (int));
	if (!vetor_X) {
		puts("Falha na solitação de memória!");
		exit(1);
	}
	
	vetor_Y = calloc(vTam, sizeof (int));
	if (!vetor_Y) {
		puts("Falha na solitação de memória!");
		exit(2);
	}

	puts("Qual o limite t do limiar? (K[i] = 0 até t)");
	scanf("%d", &limiar);
	
	srand (time (NULL));
	for (int k = 0; k < vTam; k++) *(vetor_X + k) = rand () % INTERVALO;

	// ********* //
	binaria (vetor_X, vetor_Y, vTam, limiar);
	// ********* //
	
	puts("Resultados:");
		
	printf("X = {");
	for (int k = 0; k < vTam; k++)
		if (k != vTam - 1) printf("%d, ", *(vetor_X + k));
		else printf("%d", *(vetor_X + k));
	printf("}\n");

	printf("Y = {");
	for (int k = 0; k < vTam; k++)
		if (k != vTam-1) printf("%d, ", *(vetor_Y + k));
		else  printf("%d", *(vetor_Y + k));
	printf("}\n");

	printf("\n");
	
	free(vetor_X);
	free(vetor_Y);
	
	return 0;
}

// **** FUNÇÃO *** //
void binaria(int *V, int *K, int n, int limiar){
	/*
		V = vetor original;
		K = vetor com binarios;
		n = tamanho dos vetores;
		limiar = valores acima de limiar em V viram 1 em K;
	*/
	int aux = 0;
	while (aux < n){
		if (*(V + aux) > limiar) *(K + aux) = 1;
		aux++;
	}
}