#include <stdio.h>

int main(){
  int primeiro, segundo, multiplo;
  
  puts("Entre com um inteiro:");
  scanf("%d", &primeiro);
  puts("Entre com outro inteiro:");
  scanf("%d", &segundo);

  multiplo = (!(primeiro % segundo)) ? 0 : 1;

  printf("O primeiro numero e multiplo do segundo: %d\n(0 multiplo, 1 nao multiplo)\n", multiplo);
  
  return (0);
}