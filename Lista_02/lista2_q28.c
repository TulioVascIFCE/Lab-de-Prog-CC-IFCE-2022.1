#include <stdio.h>

int main(){
  
  unsigned char valor_x, valor_y = 5, aux, antes, suces;

  
  puts("Entre com um caractere para X:");
  valor_x = getchar();

  getchar();
  
  puts("Entre com um caractere para Y maior ou igual a 5:");
  valor_y = getchar();
  
  for (int i = 1; i <= 4; i++){
    antes = valor_y - i;
    printf("Antecesor (-%d): %u\n", i, antes);
    aux = 1 << (9 - i);
    aux = aux & valor_x;
    aux = aux >> (9 - i);
    antes = antes >> 1;
    antes = antes << 1;
    antes = antes | aux;
    printf("Antecessor (-%d) com novo bit: %u\n", i, antes);
    suces = valor_y + i;
    printf("Sucessor (+%d): %u\n", i, suces);
    aux = 1 << (5 - i);
    aux = aux & valor_x;
    aux = aux >> (5 - i);
    suces = suces >> 1;
    suces = suces << 1;
    suces = suces | aux;
    printf("Sucessor (+%d) com novo bit: %u\n", i, suces);
  }
  
  printf("Fim do Programa!\n");
  
  return (0);
}