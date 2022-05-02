#include <stdio.h>
#include <string.h>
#include <time.h>

#define TAMANHO 5

int main (){
	//Variáveis:
	unsigned char vetor[TAMANHO], aux;
	
	//Leitura de dados - Usuário:
	puts ("Entre com uma string:");
	fgets  (vetor, TAMANHO, stdin);
	
	//Processamento de dados:
	for( aux = 0; aux < TAMANHO; aux++){
		if (vetor[aux] == '\n'){
			vetor[aux] = '\0';
			break;
		}else if (vetor[aux] == '\0') break;
	}
	
	//Saída de dados:
	printf ("A string gerada foi:\n%s\n", vetor);
	printf ("Número de caracteres: %hhu\n", aux);	
	
	//Fim do Programa:
	return 0;
}