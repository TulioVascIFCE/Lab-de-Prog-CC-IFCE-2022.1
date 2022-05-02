#include <stdio.h>
#include <string.h>
#include <time.h>

#define TAMANHO 100

int main (){
	//Variáveis:
	unsigned char vetor[TAMANHO], aux;
	
	//Leitura de dados - Usuário:
	puts("Entre com a String:");
	fgets (vetor, TAMANHO, stdin);
	if (vetor[strlen (vetor) - 1] == '\n') vetor[strlen (vetor) - 1] = '\0';
	else {
		do {
			aux = getchar ();
		}while (aux != '\n');
	}

	printf ("Tamnho da string gerada:%ld\n", strlen(vetor));
	
	//Saída de dados - Parte A:
	printf ("A string gerada foi:\n%s\n", vetor);
	
	//Processamento de dados:
	for(int k = 0; k <= (strlen (vetor) - 1)/2; k++){
		aux = vetor[k];
		vetor[k] = vetor[strlen (vetor) - 1 - k];
		vetor[strlen (vetor) - 1 - k] = aux;
		}
	
	//Saída de dados - Parte B:
	printf ("A string invertida fica:\n%s\n", vetor);	
	
	//Fim do Programa:
	return 0;
}