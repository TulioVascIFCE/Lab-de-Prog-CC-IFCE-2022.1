#include <stdio.h>
#include <string.h>
#include <time.h>

#define TAMANHO 100
#define ASCII 95

void buscaSentinela (unsigned char *v, char c, int t);

int main (){
	//Variáveis
	unsigned char vetor[TAMANHO];
	char caractere, aux;
	
	//Leitura de dados - Aleatório
	//srand(time(NULL));
	//for(int i = 0; i < TAMANHO; i++){
	//	*(vetor + i) = 32 + (rand() % ASCII);
	//}

	//Leitura de dados - Usuário
	puts ("Entre com uma string:");
	fgets (vetor, TAMANHO, stdin);
	if (vetor[strlen (vetor) - 1] == '\n') vetor[strlen (vetor) - 1] = '\0';
	else {
		do {
			aux = getchar ();
		}while (aux != '\n');
	}
	
	//Valor a ser procurado:
	puts ("Entre com o caractere que deseja procurar no vetor:");
	scanf ("%c", &caractere);
	
	//Saída de dados
	printf ("A string gerada foi:\n %s\n", vetor);	
	buscaSentinela (vetor, caractere, TAMANHO);
		
	//Fim do Programa
	return 0;
}

void buscaSentinela (unsigned char *v, char c, int t){
	unsigned char k = 0;
	char resposta, ultimo;

	ultimo = * (v + t - 1);
	* (v + t - 1) = c;
	while(* (v + k) != c){
		k++;
	}
	* (v + t - 1) = ultimo;
	if (k < (t - 1) || * (v + t - 1) == c){
		resposta = 'S';
	}else resposta = 'N';
	printf ("Valor procurado encontrado: %c (S = Sim, N = Não)\n", resposta);
	if (resposta == 'S') printf ("Posição: %hhu\n", k);
}
