#include <stdio.h>

int main(){
	int numero = 10;
	int *p1 = NULL;
	int *p2 = NULL;
	int exercicio1, exercicio2;

	p1 = &numero;
	p2 = p1;

	printf ("[%p]\t numero: %d\n", p1, *p1);
	printf ("[%p]\t numero: %d\n", p2, *p2);
	printf ("numero: %d\n", *&numero);

	*p2 = *p2 * 10;
	/*
	10*10 = 100 -> numero = 100
	*p1 = 100, p1 = endereço de numero
	o mesmo para p2
	*/
	printf ("[%p]\t numero: %d\n", p1, *p1);
	printf ("[%p]\t numero: %d\n", p2, *p2);
	printf ("numero: %d\n", *&numero);

	p1 = &exercicio1;
	p2 = &exercicio2;

	scanf("%d", p1);
	scanf("%d", p2);

	if (*p1 % *p2 == 0) puts("São divisiveis!");
	else puts("Não são divisiveis!");
	
	return 0;
}