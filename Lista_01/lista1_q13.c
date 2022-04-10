#include <stdio.h>

int main()
{
  int a, b, aux;

  printf("Entre com a variavel A: ");
  scanf("%d", &a);

  printf("Entre com a variavel B: ");
  scanf("%d", &b);

  printf("Os valores iniciais de A e B sao: %d e %d\n", a, b);

  aux = a;
  a   = b;
  b   = aux;

  printf("Os valores de A e B agora sao: %d e %d\n", a, b);

  return (0);
}