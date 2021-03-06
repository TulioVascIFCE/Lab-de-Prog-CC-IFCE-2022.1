/*
	Escreva um programa em C que utilize uma Estrutura aluno para conter n notas, lidas do usuário, e sua média.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    float *notas, media;
}aluno;

int main (int argc, char *argv[])
{
    aluno node;
	float soma = 0.0;
	int tam, aux;

	tam = atoi(argv[1]);

	node.notas = malloc(tam * sizeof(float));
	if (!node.notas){
		puts("Falha na solitação de memória!");
		exit(1);
	}

	srand(time(NULL));
	for( int i = 0; i < tam; i++ ){
		node.notas[i] =(rand() % 11) + (float) (rand() % 10) / 10;
		if ( node.notas[i] > 10) node.notas[i] = 10;
		soma += node.notas[i];
	}

	node.media = soma/tam;

	aux = tam;
	puts("Notas:");
	while ( tam != 0 ){
		printf("%.2f ", node.notas[aux - tam]);
		tam--;
	}
	puts("");
	puts("Média:");
	printf("%.2f\n", node.media);
	
	free(node.notas);
	
    return 0;
}