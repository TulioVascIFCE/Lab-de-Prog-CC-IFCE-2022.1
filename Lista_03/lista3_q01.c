#include <stdio.h>
#include <time.h>

#define TAMANHO 100

float maiorElemento (float *vetor);
float menorElemento (float *vetor);

int main (){
	//Variaveis
	float vetor[TAMANHO], soma;
	
	//Leitura de dados - Aleatorio
	puts ("Vetor Aleatório:");
	srand (time (NULL));
	for (int i = 0; i < TAMANHO; i++){
		* (vetor + i) = (float) (rand () % 101) / 100;
		printf ("%.2f  ", * (vetor + i));
	}
	
	//Saida de dados
	puts ("");
	soma = maiorElemento (vetor) + menorElemento (vetor);
	printf ("Soma: %.2f\n", soma);
	
	//Fim do Programa
	return 0;
}

float maiorElemento (float *vetor){
	float maior, aux;
	
	for (int j = 0; j < TAMANHO - 2; j++){
		if (* (vetor + j) > * (vetor + j + 1)){
			aux = * (vetor + j);
			* (vetor + j) = * (vetor + j+1);
			* (vetor + j + 1) = aux;
		}
	}
	
	maior = * (vetor + TAMANHO - 2);
	printf ("Maior Elemento do Vetor: %.2f\n", maior);

	return maior;
}

float menorElemento (float *vetor){
	float menor, aux;
	
	for (int j = 0; j < TAMANHO - 2; j++){
		if (* (vetor + j) < * (vetor + j + 1)){
			aux = * (vetor + j);
			* (vetor + j) = * (vetor + j + 1);
			* (vetor + j + 1) = aux;
		}
	}
	
	menor = * (vetor + TAMANHO - 2);
	printf ("Menor Elemento do Vetor: %.2f\n", menor);

	return menor;
}