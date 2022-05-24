#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerandoY (int *, int *, int , int );
void algoritmo_rol (int *, int *, int *, int , int);

int main () {
	int *vetor_X, *vetor_Y, *matriz_M;
	int vTam, intervalo;

	puts("Qual tamanho dos vetores X e Y?");
	scanf("%d", &vTam);
	
	vetor_X = malloc(vTam * sizeof (int));
	if (!vetor_X) {
		puts("Falha na solitação de memória!");
		exit(1);
	}
	
	vetor_Y = malloc(vTam * sizeof (int));
	if (!vetor_Y) {
		puts("Falha na solitação de memória!");
		exit(1);
	}

	puts("Qual o limite N do intervalo? (0 até N-1)");
	scanf("%d", &intervalo);
	
	srand (time (NULL));
	for (int k = 0; k < vTam; k++)
		*(vetor_X + k) = rand () % intervalo;

	gerandoY(vetor_X, vetor_Y, vTam, intervalo);

	matriz_M = malloc((intervalo * intervalo) * sizeof(int));
	if (!matriz_M) {
		puts("Falha na solitação de memória!");
		exit(1);
	}
	for (int k = 0; k < (intervalo * intervalo); k++)
		*(matriz_M + k) = 0;

	algoritmo_rol (vetor_X, vetor_Y, matriz_M, vTam, intervalo);

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

	printf("Matriz M :\n");
	for (int k = 0; k < (intervalo * intervalo); k++) {
		if ((k != 0) && ((k % intervalo) == 0)) printf("\n");
		printf("%d\t", *(matriz_M + k));
	}
	printf("\n");
	
	free(vetor_X);
	free(vetor_Y);
	free(matriz_M);
	
	return 0;
}

void gerandoY (int *Ax, int *By, int nT, int nM) {
	int r;
	for (int k = 0; k < nT; k++){
		r = rand () % 11;
		if ((0 < r) && (r <= 3)){
			*(By + k) = *(Ax + k);
		} else {
			if ((3 < r) && (r <= 5)){
				*(By + k) = (*(Ax + k) == 0) ? *(Ax + k) : *(Ax + k) - 1;
			} else {
				if ((5 < r) && (r <= 7)){
					*(By + k) = (*(Ax + k) == (nM - 1)) ? *(Ax + k) : *(Ax + k) + 1;
				} else {
					if ((7 < r) && (r <= 9)){
						*(By + k) = (*(Ax + k) <= 1) ? *(Ax + k) : *(Ax + k) - 2;
					} else {
						if ((9 < r) && (r <= 10)){
							*(By + k) = (*(Ax + k) >= (nM - 2)) ? *(Ax + k) : *(Ax + k) + 2;
						} 
					}
				}
			}
		}
	}
}

void algoritmo_rol (int *Ax, int *By, int *Cm, int nT, int nM) {
	// Obs: Ax = coluna e By = linha
	for (int i = 0; i < nM ; i++)           // i = linha de M
		for (int j = 0; j < nM ; j++)      // j = coluna de M
			for (int k = 0; k < nT ; k++) // k = tam. do vetor
				if ((*(Ax + k) == j) && (*(By + k) == i))
					(*(Cm + (nM * i) + j))++;
}