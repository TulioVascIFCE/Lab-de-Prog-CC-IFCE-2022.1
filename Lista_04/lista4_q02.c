#include <stdio.h>

int main(){
	int numero_a, numero_b, aux;
	int *p, *q;

	p = &numero_a;
	q = &numero_b;
	
	scanf("%d", p);
	scanf("%d", q);

	printf("Antes (Endereços): a - %d (%p), b - %d (%p)\n", numero_a, p, numero_b, q);
	
	aux = *p;
	*p = *q;
	*q = aux;

	printf("Depois (Endereços): a - %d (%p), b - %d (%p)\n", numero_a, p, numero_b, q);
	
	return 0;
}