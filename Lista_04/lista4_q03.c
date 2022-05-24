#include <stdio.h>

int main (){
	int entrada, menor, aux;
	int *e = NULL, *m = NULL;

	e = &entrada;
	m = &menor;
	aux = 0;
	
	do {
		puts ("Entre com um inteiro não negativo (ou negativo para sair):");
		scanf("%d", e);
		if(*e < 0) break;
		if(aux == 0){
			*m = *e;
			aux++;
		}else{
			*m = (*m > *e) ? *e : *m;
		}
		printf("Menor: %d\n",*m);
	}while(1);
	
	return 0;
}