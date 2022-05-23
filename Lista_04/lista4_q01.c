#include <stdio.h>

int main(){
	int parcela_a, parcela_b, soma;
	int *a, *b, *s;

	a = &parcela_a;
	b = &parcela_b;
	s = &soma;
	
	scanf("%d", a);
	scanf("%d", b);

	*s = *a + *b;

	printf("Parcelas (Endereços): %d (%p) %d (%p)\n", parcela_a, a, parcela_b, b);
	printf("Soma (Endereço): %d (%p)\n", soma, s);
	
	return 0;
}