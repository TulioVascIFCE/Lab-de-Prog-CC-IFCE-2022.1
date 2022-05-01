#include <stdio.h>

#define CENTESIMO 99

float maiorElemento(float *vetor);
float menorElemento(float *vetor);

int main(){
	//Variaveis
	float vetor[15], soma;
	
	//Leitura de dados - Aleatorio
	puts("Vetor Aleatório:");
	for(int i = 0; i < 15; i++){
		*(vetor + i) = (rand() % 1) + (float) (rand() % CENTESIMO) / 101;
		printf("%.2f\t", *(vetor + i));
	}
	
	//Saida de dados
	puts("");
	soma = maiorElemento(vetor) + menorElemento(vetor);
	printf("Soma: %.2f\n", soma);
	
	//Fim do Programa
	return 0;
}

float maiorElemento(float *vetor){
	float maior, aux;
	
	for(int j = 0; j<14; j++){
		if(*(vetor + j) > *(vetor + j+1)){
			aux = *(vetor + j);
			*(vetor + j) = *(vetor + j+1);
			*(vetor + j+1) = aux;
		}
	}
	
	maior = *(vetor + 14);
	printf("Maior Elemento do Vetor: %.2f\n", maior);

	return maior;
}

float menorElemento(float *vetor){
	float menor, aux;
	
	for(int j = 0; j<14; j++){
		if(*(vetor + j) < *(vetor + j+1)){
			aux = *(vetor + j);
			*(vetor + j) = *(vetor + j+1);
			*(vetor + j+1) = aux;
		}
	}
	
	menor = *(vetor + 14);
	printf("Menor Elemento do Vetor: %.2f\n", menor);

	return menor;
}