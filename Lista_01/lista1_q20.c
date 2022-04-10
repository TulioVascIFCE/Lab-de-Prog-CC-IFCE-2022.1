#include <stdio.h>

int teste_par(int numero){
  return !((numero & 1) == 0);
}

int main(){
  int numero;

  puts("Entre com um numero inteiro:");
  scanf("%d", &numero);

  printf("O numero tem paridade %d\n(0 par, 1 impar)\n", teste_par(numero));
  
  return (0);
}