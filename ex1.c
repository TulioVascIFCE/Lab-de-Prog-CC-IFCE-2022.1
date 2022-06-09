/*
#include <stdio.h>
#include <stdlib.h>

int sobeUm(int, int);

int main(int argc, char *argv[]){
    int parcela_a, parcela_b;

    parcela_a = atoi(argv[1]);
    parcela_b = atoi(argv[2]);

	printf("Parcela A: %d\n", parcela_a);
	printf("%d\n", sobeUm(parcela_a, parcela_b));
	
    return 0;
}
*/

int sobeUm(int a, int b){
	int subidas = 0;
	int menor, maior;
	
	if (a >= b){
		maior = a;
		menor = b;
	} 
	else{
		maior = b;
		menor = a;
	} 
	
	while (menor > 0){
		if ((maior%10 + menor%10) >= 10) subidas++;
		maior = maior/10;
		menor = menor/10;
	}
	return subidas;
}