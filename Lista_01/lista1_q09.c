#include <stdio.h>

int main()
{
  int numero;

  printf("Entre com um valor inteiro: ");
  scanf("%d", &numero);

  printf("antecessor de %d = %d\n", numero, numero - 1);

  printf("sucessor de %d = %d\n", numero, numero + 1);

  return (0);
}
