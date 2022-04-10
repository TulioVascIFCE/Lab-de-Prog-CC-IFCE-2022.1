#include <stdio.h>

int main()
{
  int x;
  unsigned int n;
  long int produto;

  puts("Entre com o valor de X: ");
  scanf("%d", &x);

  puts("Entre com o valor de N: ");
  scanf("%u", &n);

  produto = x * 2<<(n-1);
  printf("Valor do produto de %d por 2 elevado a %u fica: %ld\n", x, n, produto);

  return (0);
}