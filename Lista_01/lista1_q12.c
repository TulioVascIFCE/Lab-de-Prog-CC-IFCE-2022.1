#include <stdio.h>

int main()
{
  float numero_a, numero_b;

  printf("Entre com o primeiro numero: ");
  scanf("%f", &numero_a);

  printf("Entre com o segundo numero: ");
  scanf("%f", &numero_b);

  printf("Soma: %f\n", numero_a + numero_b);
  printf("Diferenca: %f\n", numero_a - numero_b);
  printf("Produto: %f\n", numero_a * numero_b);
  printf("Quociente: %f\n", numero_a / numero_b);
  printf("Resto da Divisao: %d\n", (int)numero_a % (int)numero_b);

  return (0);
}