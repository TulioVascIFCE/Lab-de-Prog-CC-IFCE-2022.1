#include <stdio.h>

//Questão 5

int main()
{
    float x;
  
    printf("Entre com o valor da conta: ");
    scanf("%f", &x);

    printf("Valor da conta com adicional de 10%%: %.2f\n", 1.1*x);

    return (0);
}
