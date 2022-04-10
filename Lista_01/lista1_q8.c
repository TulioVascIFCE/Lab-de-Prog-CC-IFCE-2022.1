#include <stdio.h>

int main()
{
  int numero;

  printf("Entre com um valor inteiro: ");
  scanf("%d", &numero);

  printf("%d ao quadrado = %d\n", numero, numero * numero);

  return (0);
}