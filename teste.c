//Cabeçalho - bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Protótipos da funções
void aleatoria(int *, int*);
void matrizDentroMatriz(int *, int *, int *);
void lbp(int *, int *, int *);
void binaria(int *);
void exibirMatriz(int *, int*);

int main(int argc, char *argv[]){
	//Declaração de Variáveis
	int vetor[7], *matriz_S, *matriz_M, *matriz_Aux, aux;

	//Recebendo os argumentos de entrada
	if (argc != 5){
		printf("Uso incorreto. O usuário deve entrar com 4 argumentos (numeros inteiros).\nExemplo:\n./teste.e 4[linhas] 4[colunas] 0[lim_inf] 15[lim_sup]\nObs: Ignore os [.] na entrada.\n");
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
		printf("Uso incorreto. As dimnsões da matriz devem ser não nulas.\nExemplo:\n./teste.e 2[linhas] 3[colunas] 5[lim_inf] 15[lim_sup]\nObs: Ignore os [.] na entrada.\n");
		exit(2);
	}

	*(vetor + 5) = *vetor + 2;
	*(vetor + 6) = *(vetor + 1) + 2;

	//Gerando a Matriz normal M e a binária S
	matriz_M = malloc((*vetor * *(vetor + 1)) * sizeof(int));
	matriz_S = calloc((*vetor * *(vetor + 1)), sizeof(int));
	matriz_Aux = calloc(*(vetor + 5) * *(vetor + 6), sizeof(int));

	//Validando as Matrizes dadas
	if (!matriz_M || !matriz_S || !matriz_Aux){
		puts("Não foi possível alocar a memória requisitada.\n");
		exit(3);
	}

	//Funções processando os dados
	//srand(time(NULL));

	aleatoria(matriz_M, vetor);

	matrizDentroMatriz(matriz_M, matriz_Aux, vetor);
	lbp(matriz_Aux, matriz_S, vetor);
	
	//Exibindo os dados
	puts("\nMatriz M (Original):");
	exibirMatriz(matriz_M, vetor);

	puts("Matriz Aux (Auxiliar):");
	exibirMatriz(matriz_Aux, vetor + 5);

	//puts("Matriz S (Binária):");
	//exibirMatriz(matriz_S, vetor);

	//Liberando a Memória e Encerrando programa
	puts("");
	free(matriz_M);
	free(matriz_S);
	free(matriz_Aux);
	
	return EXIT_SUCCESS;
}

void exibirMatriz(int *A, int *dim){
	for( int k = 0; k < (*dim * *(dim + 1)); k ++){
		printf("%d\t", *(A + k));
		if(k % (*(dim + 1)) == (*(dim + 1) - 1)) printf("\n");
	}
}

void aleatoria(int *A, int *lim){
	for( int k = 0; k < (*lim * *(lim + 1)); k++ ) *(A + k) = *(lim + 2) + (rand() % (*(lim + 3) + 1));
}

void matrizDentroMatriz(int *A, int *B, int *v){
	int aux = 0;
	for( int k = 0; k < *v * *(v + 1); k++ ){
		aux += 1;
		if (k % *(v + 1) == 0 && k != 0) aux += 2;
		*(B + *(v + 6) + aux) = *(A + k);
	}
}

void lbp(int *A, int *B, int *v){
	int subMatriz[9];
	int aux[3] = {-1, 0, 1};
	for( int k = *(v + 6) + 1; k < *(v + 5) * *(v + 6) - *(v + 6); k++){
		if( k % *(v + 6) == 0 || k % *(v + 6) == *(v + 6) - 1 ) continue;
		printf("\nSub Matriz %d:", k);
		for( int i = 0; i < 3; i++){
			for( int j = 0; j < 3; j++){
				*(subMatriz + 3*i + j) = *(A + *(v + 5)*aux[i] + aux[j] + k);
				binaria(subMatriz);
				if( !(j%3) ) printf("\n");
				printf("%d\t", *(subMatriz + 3*i + j));
			}
		}
	}
	//puts("");
}

void binaria(int *A){
	for (int k = 0; k < 8; k++){
		if (k == 4) continue;
		else if (*(A + k) > *(A + 4)) *(A + k) = 1;
		else *(A + k) = 0;
		}
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(void)
{

    DIR *dir;
    struct dirent *lsdir;

    dir = opendir("c:\\Windows\\");

    //print all the files and directories within directory
    while ( ( lsdir = readdir(dir) ) != NULL )
    {
        printf ("%s\n", lsdir->d_name);
    }

    closedir(dir);

    return 0;

}
*/