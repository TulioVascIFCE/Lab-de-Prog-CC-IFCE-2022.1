#include <stdio.h>

//Questão 4

int main()
{
    int x;
  
    printf("Entre com um valor inteiro: ");
    scanf("%d", &x);

    printf("Triplo do número: %d\nDobro do número: %d\nMeio do número: %.2f\n", x*3, x*2,(float)x/2);

    return (0);
}
