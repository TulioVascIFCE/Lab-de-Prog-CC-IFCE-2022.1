#include <stdio.h>
#include <time.h>

#define TAMANHO 3

int main (){
	//Variáveis:
	int matriz[TAMANHO][TAMANHO];
	
	//Leitura de dados:
	puts ("Entre com os elementos da Matriz:");
	for (int i = 0; i < TAMANHO; i++){
		for (int j = 0; j < TAMANHO; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	//Processamento de Dados -- Saída:
	puts("Elementos da Diagonal Principal:")
	for (int i = 0; i < TAMANHO; i++) printf("%d ", matriz[i][i]);
	puts("");

	//Fim do Programa
	return 0;
}