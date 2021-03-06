/*
	Escreva um programa em C que utilize uma Estrutura estoque que contémm uma string com o nomePeca,
	um número inteiro para identificar o número da peça, o preço em ponto flutuante e um elemento
	inteiro para identificar o número do pedido.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char peca[16];
	float preco;
	int pedido;
}estoque;

int main (int argc, char *argv[])
{
    estoque node;
	int i;

	i = 0;
	while (argv[1][i] != '\0'){
		node.peca[i] = argv[1][i];
		i++;
	}
	node.preco = atof(argv[2]);
	node.pedido = atoi(argv[3]);

	puts("Estoque:");
	i = 0;
	while (argv[1][i] != '\0'){
		printf("%c",node.peca[i]);
		i++;
	}
	puts("");
	printf("Preço: R$%.2f\n", node.preco);
	printf("Número do Pedido: %d\n", node.pedido);
	
    return 0;
}