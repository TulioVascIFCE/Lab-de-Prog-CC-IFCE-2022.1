#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 100

int main () {
	char caractere [TAMANHO], *pc;
	int aux = 0;

	pc = caractere;
	
	puts ("Entre com uma string:");
	scanf("%[^\n]", pc);
	getchar();

	puts ("Tamanho da string:");
	while(*(pc+aux) != '\0') ++aux;
	
	printf("%d\n", aux);

	return 0;
}