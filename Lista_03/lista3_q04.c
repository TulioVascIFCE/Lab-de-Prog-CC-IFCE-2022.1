#include <stdio.h>
#include <string.h>

#define TAMANHO 100

int main (){
	//Variáveis:
	unsigned char vetorUm[TAMANHO], vetorDois[TAMANHO], v[TAMANHO], aux, i = 0, j = 0;
	char iguais = 'S';
	
	//Leitura de Dados - Usuário;
	for (int k = 0; k < 2; k++){
		printf ("Entre com a String %d", k+1);
		fgets (v, TAMANHO, stdin);
		if (v[strlen (v) - 1] == '\n') v[strlen (v) - 1] = '\0';
		else {
			do {
			aux = getchar ();
			}while (aux != '\n');
		}
		if (k == 0){
			while (v[i] != '\0'){
				vetorUm[i] = v[i];
				i++;
			}
		}else{
			while (v[j] != '\0'){
				vetorDois[j] = v[j];
				j++;
			}
		}
	}

	//Processamento de Dados:
	aux = 0;
	while (v[aux] != '\0'){
		if(vetorUm[aux] != vetorDois[aux]) iguais = 'N';
		aux++;
	}
	//Saída de Dados:
	printf("Os vetores são iguais: %c (S = Sim, N = Não)\n", iguais);
	
	//Fim do Programa:
	return 0;
}