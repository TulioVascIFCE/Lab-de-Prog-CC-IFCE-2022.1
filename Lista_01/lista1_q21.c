#include <stdio.h>

int multiplo(int primeiro, int segundo){
    return !((primeiro % segundo) == 0);
}

int main(){
  int primeiro, segundo;
  
  puts("Entre com um inteiro:");
  scanf("%d", &primeiro);
  puts("Entre com outro inteiro:");
  scanf("%d", &segundo);

  printf("O primeiro numero e multiplo do segundo: %d\n(0 multiplo, 1 nao multiplo)\n", multiplo(primeiro, segundo));
  
  return (0);
}
