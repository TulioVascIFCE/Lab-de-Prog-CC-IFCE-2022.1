/* Nome: Túlio de Oliveira VAsconcelos */

//Cabeçalho - Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Aleatório entre 0 e (INTERVALO - 1)
#define INTERVALO 100 

/* *** Projeto da Função *** */
void procuraBuffer(int *, int *, int);

int main () {
	//Declarando Variáveis
	char *string, *buffer, x;
	int indice_resposta = 0, vTam;

	puts("Qual tamanho da string?");
	scanf("%d", &vTam);
	
	*string= malloc(vTam * sizeof (char));
	if (!string) {
		puts("Falha na solitação de memória!");
		exit(1);
	}
	
	srand(time(NULL));
	
	//String aleatória:
	for (int i = 0; i < vTam; i++)
		*(string + i) = ' ' + (rand() % 94);

	

	puts("Sring Gerada:");
	for (int i = 0; i < vTam; i++)
		printf("%c", *(string + i));
	puts("");
	
	return 0;
}

char procuraBuffer(char *V, char *B, char x, int n){
	//Busca com "Sentinela":
	char ultimo;
	ultimo = *();
	*(arranjo + TAMANHO) = x;
	
	while (*(arranjo + indice_resposta) != x)
		indice_resposta ++;
	*(arranjo + TAMANHO) = ultimo;
	
	if (indice_resposta < TAMANHO || *(arranjo + TAMANHO) == x) {
		resposta = 'S';
	} else resposta = 'N';
	
	printf ("Valor procurado encontrado %c\n", resposta);
	
	if (resposta == 'S')
		printf ("Posição: %d\n", indice_resposta);
}