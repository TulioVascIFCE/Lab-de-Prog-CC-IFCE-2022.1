#include <stdio.h>
#include <string.h>

#define TAMANHO 100

int main (){
	//Variáveis:
	unsigned char vetorUm[TAMANHO], vetorDois[TAMANHO], aux;
	char iguais = 'S';
	
	//Leitura de Dados - Usuário;
	//Vetor Um
	puts("Entre com a String Um:");
	fgets (vetorUm, TAMANHO, stdin);
	if (vetorUm[strlen (vetorUm) - 1] == '\n') vetorUm[strlen (vetorUm) - 1] = '\0';
	else {
		do {
			aux = getchar ();
		}while (aux != '\n');
	}
	//Vetor Dois
	puts("Entre com a String Dois:");
	fgets (vetorDois, TAMANHO, stdin);
	if (vetorDois[strlen (vetorDois) - 1] == '\n') vetorDois[strlen (vetorDois) - 1] = '\0';
	else {
		do {
			aux = getchar ();
		}while (aux != '\n');
	}

	//Processamento de Dados - Sem strcmp():
	aux = 0;
	while ((vetorUm[aux] != '\0') || (vetorDois[aux] != '\0')){
		if(vetorUm[aux] != vetorDois[aux]) iguais = 'N';
		aux++;
	}

	//Processamento de Dados - Comm strcmp():
	if (strcmp (vetorUm, vetorDois) != 0) iguais = 'N';
	
	//Saída de Dados:
	printf("Os vetores são iguais: %c (S = Sim, N = Não)\n", iguais);
	
	//Fim do Programa:
	return 0;
}