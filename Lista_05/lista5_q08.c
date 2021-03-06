/* Lista 5 - Questão 8 */

//Cabeçalho - bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Protótipos da funções
void aleatoria(int *, int*);
void binaria(int *, int *, int *);
void exibirMatriz(int *, int*);

int main(int argc, char *argv[]){
	//Declaração de Variáveis
	int vetor[5], *matriz_S, *matriz_M, aux;

	//Recebendo os argumentos de entrada
	if (argc != 6){
		printf("Uso incorreto. O usuário deve entrar com 5 argumentos (numeros inteiros).\nExemplo:\n./lista5_q08.e 2[linhas] 3[colunas] 5[lim_inf] 15[lim_sup] 10[limiar]\nObs: Ignore os [.] na entrada.\n");
		exit(1);
	}

	aux = 1;
	while (aux < argc){
		*(vetor + (aux-1)) = atoi(*(argv + aux));
		aux++;
	}

	if (*(vetor + 2) > *(vetor + 3)){
		aux = *(vetor + 2);
		*(vetor + 2) = *(vetor + 3);
		*(vetor + 3) = aux;
	}

	//Validando os argumentos de entrada
	if ((*vetor <= 0)  || (*(vetor + 1) <= 0)){
		printf("Uso incorreto. As dimnsões da matriz devem ser não nulas.\nExemplo:\n./lista5_q08.e 2[linhas] 3[colunas] 5[lim_inf] 15[lim_sup] 10[limiar]\nObs: Ignore os [.] na entrada.\n");
		exit(2);
	}
	
	if ((*(vetor + 2) > *(vetor + 4)) || (*(vetor + 3) < *(vetor + 4))){
		printf("Uso incorreto. O limiar deve estar dentro do intevalo específicado.\nExemplo:\n./lista5_q08.e 2[linhas] 3[colunas] 5[lim_inf] 15[lim_sup] 10[limiar]\nObs: Ignore os [.] na entrada.\n");
		exit(3);
	}

	//Gerando a Matriz normal M e a binária S
	matriz_M = malloc((*vetor * *(vetor + 1)) * sizeof(int));
	matriz_S = calloc((*vetor * *(vetor + 1)), sizeof(int));

	//Validando as Matrizes dadas
	if (!matriz_M || !matriz_S){
		puts("Não foi possível alocar a memória requisitada.\n");
		exit(4);
	}

	//Funções processando os dados
	srand(time(NULL));

	aleatoria(matriz_M, vetor);

	binaria(matriz_M, matriz_S, vetor);

	//Exibindo os dados
	puts("Matriz M (Original):");
	exibirMatriz(matriz_M, vetor);

	puts("Matriz S (Binária):");
	exibirMatriz(matriz_S, vetor);

	//Liberando a Memória e Encerrando programa
	puts("");
	free(matriz_M);
	free(matriz_S);
	
	return EXIT_SUCCESS;
}

void exibirMatriz(int *A, int *dim){
	for (int k = 0; k < (*dim * *(dim + 1)); k ++){
		printf("%d\t", *(A + k));
		if(k % (*(dim + 1)) == (*(dim + 1) - 1)) printf("\n");
	}
}

void aleatoria(int *A, int *lim){
	for (int k = 0; k < (*lim * *(lim + 1)); k++) *(A + k) = *(lim + 2) + (rand() % (*(lim + 3) + 1));
}

void binaria(int *A, int *B, int *lim){
	for (int k = 0; k < (*lim * *(lim + 1)); k++)
		if (*(A + k) > *(lim + 4)) *(B + k) = 1;
}