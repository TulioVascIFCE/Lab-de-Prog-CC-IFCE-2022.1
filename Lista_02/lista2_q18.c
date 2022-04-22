#include <stdio.h>

int main(){
  
  unsigned long sucessor, atual = 1, soma = 1 ;

  puts("Grão de Trigo no Tabuleiro de Xadrex:");

  for (int i = 1; i <= 64; i++){
    printf("\nGraos na casa %d: %lu\nSoma acumulada ate a casa %d = %lu\n", i, atual, i, soma);
    sucessor = 2 * atual;
    atual = sucessor;
    soma += atual;
  }

  printf("\nFim do Programa!\n");
  
  return (0);
}