#include <stdio.h>

int main(){
  
  int numero, direita, esquerda, simetria;

  puts("Entre com um numero inteiro de 5 digitos:");
  scanf("%d", &numero);
  
  for (int i = 1; i <= 10; i *=10){
      esquerda = numero % (100000 / i);
      esquerda = esquerda / (10000 / i);
      direita = numero % (10 * i);
      direita = direita / i;
      simetria = (direita == esquerda) ? 1 : 0;
  }
  
  if  (simetria){
      puts("O numero e palindromo");
    }
  else{
      puts("O numero nao e palindromo");
  }

  printf("\nFim do Programa!\n");
  
  return (0);
}