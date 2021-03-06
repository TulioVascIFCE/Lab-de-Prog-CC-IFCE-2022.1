#include <stdio.h>
#include <math.h>
#include <time.h>

#define TAMANHO 3
#define INTERVALO 20

int main (){
	//Variáveis:
	int vetor[TAMANHO], acumulador, aux;
	float media_normal, media_geo;

	//Leitura de dados - Aleatório
	puts ("Vetor Aleatório:");
	srand (time (NULL));
	for (int i = 0; i < TAMANHO; i++){
		* (vetor + i) = (rand () % INTERVALO);
		printf ("%d  ", * (vetor + i));
	}
	puts("");

	//Processamento de Dados - Média Normal:
	acumulador = 0;
	aux = 0;
	while(aux < TAMANHO){
		acumulador += *(vetor + aux);
		aux++;
	}
	media_normal = (float) acumulador/TAMANHO;

	//Saída de Dados - Média Normal:
	puts("A média normal dos elementos do vetor é:");
	printf("%.3f\n", media_normal);

	//Processamento de Dados - Média Geométrica:
	acumulador = 1;
	aux = 0;
	while(aux < TAMANHO){
		acumulador *= *(vetor + aux);
		aux++;
	}
	media_geo = pow(acumulador, (float) 1 / 3);

	//Saída de Dados - Média Geométrica:
	puts("A média geométrica dos elementos do vetor é:");
	printf("%.3f\n", media_geo);
	
	//Fim do Programa:
	return 0;
}