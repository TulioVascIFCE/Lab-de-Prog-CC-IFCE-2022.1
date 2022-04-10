#include <stdio.h>

int main()
{
  float cotacao, real;

  printf("Entre com o valor da cotacao (quantos reais valem um dolar): ");
  scanf("%f", &cotacao);

  printf("Entre com o valor em reais que se eseja converter: ");
  scanf("%f", &real);

  printf("O valor em dolar fica: %.2f\n", cotacao * real);

  return (0);
}