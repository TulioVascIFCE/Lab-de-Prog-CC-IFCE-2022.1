#include <stdio.h>
#include <time.h>

#define TAMANHO 100

int main () {
	char arranjo [TAMANHO], resposta, x, ultimo;
	int indice_resposta = 0;

	srand(time(NULL));
	
	//Arranjo aleatório:
	for (int i = 0; i < TAMANHO; i++)
		*(arranjo + i) = ' ' + (rand() % 94);
	
	//Valor a ser procurado:
	puts("Entre com o valor de X:");
	scanf ("%c", &x);

	//Busca com "Sentinela":
	
	ultimo = *(arranjo + TAMANHO);
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

	puts("Sring Gerada:");
	for (int i = 0; i < TAMANHO; i++)
		printf("%c", *(arranjo + i));
	puts("");
	
	return 0;
}