#include <stdio.h>
#include <string.h>

#define TAMANHO 100

int main (){
	//Variáveis:
	unsigned char vetorUm[TAMANHO], vetorDois[TAMANHO], aux, k;
	
	//Leitura de Dados - Usuário;
	//Vetor Um:
	puts("Entre com a String Um:");
	fgets (vetorUm, TAMANHO, stdin);
	if (vetorUm[strlen (vetorUm) - 1] == '\n') vetorUm[strlen (vetorUm) - 1] = '\0';
	else {
		do {
			aux = getchar ();
		}while (aux != '\n');
	}
	//Vetor Dois:
	puts("Entre com a String Dois:");
	fgets (vetorDois, TAMANHO, stdin);
	if (vetorDois[strlen (vetorDois) - 1] == '\n') vetorDois[strlen (vetorDois) - 1] = '\0';
	else {
		do {
			aux = getchar ();
		}while (aux != '\n');
	}

	//Processamento de Dados - Sem strcat():
	aux = 0;
	k = 0;
	while (vetorUm[aux] != '\0'){
		aux++;
	}
	while (aux < (TAMANHO - 1)){
		if (vetorDois[k] != '\0') vetorUm[aux] = vetorDois[k];
		aux++;
		k++;
		if (aux == (TAMANHO - 1)){
			vetorUm[aux] = '\0';
			break;
		}
	}

	//Saída de Dados - Sem strcat:
	printf("\nSem strcat() -- Vetores concatenados:\n%s\n", vetorUm);

	//Leitura de Dados - Usuário;
	//Vetor Um:
	puts("Entre com a String Um:");
	fgets (vetorUm, TAMANHO, stdin);
	if (vetorUm[strlen (vetorUm) - 1] == '\n') vetorUm[strlen (vetorUm) - 1] = '\0';
	else {
		do {
			aux = getchar ();
		}while (aux != '\n');
	}
	//Vetor Dois:
	puts("Entre com a String Dois:");
	fgets (vetorDois, TAMANHO, stdin);
	if (vetorDois[strlen (vetorDois) - 1] == '\n') vetorDois[strlen (vetorDois) - 1] = '\0';
	else {
		do {
			aux = getchar ();
		}while (aux != '\n');
	}
	
	//Processamento  e saída de Dados - Comm strcat():
	aux = 0;
	k = 0;
	while (vetorUm[aux] != '\0'){
		aux++;
	}
	while (vetorDois[k] != '\0'){
		k++;
	}
	if ((TAMANHO - aux) > k){
		strcat(vetorUm, vetorDois);
		printf("\nCom strcat() -- Vetores concatenados:\n%s\n", vetorUm);
	} else puts("Com strcat() -- Não Há espaço em String Um para a String Dois completa");
	
	//Fim do Programa:
	return 0;
}