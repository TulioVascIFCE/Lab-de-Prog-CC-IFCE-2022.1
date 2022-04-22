#include <stdio.h>

int main(){
  
  int anterior = 0, atual = 1, sucessor = 0;

  puts("Serie Fibonacci ate vigesimo termo:");

  for (int i = 1; i <= 20; i++){
    printf("%d ", atual);
    sucessor = anterior + atual;
    anterior = atual;
    atual = sucessor;
  }

  printf("\nFim do Programa!\n");
  
  return (0);
}