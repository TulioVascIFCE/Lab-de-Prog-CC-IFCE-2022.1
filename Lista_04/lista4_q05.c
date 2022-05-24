#include <stdio.h>

#define TAMANHO 100

int main () {
	char string [TAMANHO];
	int aux = 0;

	puts ("Entre com uma string:");
	scanf("%[^\n]", string);
	getchar();

	/*
	//Alternativo
	puts ("Entre com uma string:");
	getchar();
	gets(string);
	getchar();
	*/

	puts ("Tamanho da string:");
	while(*(string + aux) != '\0') ++aux;
	
	printf("%d\n", aux);

	return 0;
}