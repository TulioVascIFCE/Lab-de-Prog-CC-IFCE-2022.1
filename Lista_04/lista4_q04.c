#include <stdio.h>

#define TAMANHO 3

int main () {
	char caractere [TAMANHO], *pc = NULL;
	int inteiro[TAMANHO], *pi = NULL;
	float ponto_flutuante[TAMANHO], *pf = NULL;

	pc = caractere;
	pi = inteiro;
	pf = ponto_flutuante;

	for (int k = 0; k < TAMANHO; k++) {
		puts ("Entre com um caractere:");
		scanf ("%c", pc + k);
		puts ("Entre com um inteiro:");
		scanf ("%d", pi + k);
		puts ("Entre com um ponto flutuante:");
		scanf ("%f", pf + k);
		getchar();
	}

	puts ("Vetores e Endereços:");
	
	printf ("Caractere\tEndereço\n");
	for (int k = 0; k < TAMANHO; k++)
		printf ("%c\t%p\n", *(pc +  k), pc + k);
	
	printf ("Inteiro\tEndereço\n");
	for (int k = 0; k < TAMANHO; k++)
		printf ("%d\t%p\n", *(pi + k), pi + k);
	
	printf ("Ponto Flutuante\tEndereço\n");
	for (int k = 0; k < TAMANHO; k++)
		printf ("%.2f\t%p\n", *(pf + k), pf + k);
	
	return 0;
}