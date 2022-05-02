#include <stdio.h>
#include <time.h>

#define TAMANHO 3
#define INTERVALO 20 //[0,19]

int main (){
	//Variáveis:
	int vetor[TAMANHO], soma = 0, aux;
	float media_normal, media_geo;

	//Leitura de dados - Aleatório
	puts ("Vetor Aleatório:");
	srand (time (NULL));
	for (int i = 0; i < TAMANHO; i++){
		* (vetor + i) = (rand () % INTERVEALO);
		printf ("%d  ", * (vetor + i));
	}

	//Processamento de Dados - Média Normal:
	aux = 0;
	while(aux < TAMANHO){
		soma += vetor[aux];
		aux++;
	}
	media_normal = (float) soma/TAMANHO;
	
	//Fim do Programa:
	return 0;
}