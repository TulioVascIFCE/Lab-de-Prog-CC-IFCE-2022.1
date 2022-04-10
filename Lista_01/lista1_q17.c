#include <stdio.h>

int main(){
  int inteiro, modulo_int;
  
  puts("Entre com um numero inteiro:");
  scanf("%d", &inteiro);

  modulo_int = (inteiro <= 0) ? -inteiro : inteiro;
  
  printf("%d\n", modulo_int);
  
  return (0);
}