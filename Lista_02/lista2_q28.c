#include <stdio.h>

int main(){
  
  unsigned char valor_x = 255, valor_y = 128, aux, antecessor, sucessor;

  /*
  puts("Entre com um caractere para X:");
  valor_x = getchar();

  getchar();
  
  puts("Entre com um caractere para Y maior ou igual a 5:");
  valor_y = getchar();
  */
  
  for (int i = 1; i <= 4; i++){
    antecessor = valor_y - i;
    printf("Antecesor (Y - %d): %u\n", i, antecessor);
    aux = 1 << (4 - i);
    aux = aux & valor_x;
    aux = aux >> (4 - i);
    antecessor = antecessor >> 1;
    antecessor = antecessor << 1;
    antecessor = antecessor | aux;
    printf("Antecessor (Y - %d) com bit %d: %u\n", i, 5 - i, antecessor);
    sucessor = valor_y + i;
    printf("Sucessor (Y + %d): %u\n", i, sucessor);
    aux = 1 << (3 + i);
    aux = aux & valor_x;
    aux = aux >> (3 + i);
    sucessor = sucessor >> 1;
    sucessor = sucessor << 1;
    sucessor = sucessor | aux;
    printf("Sucessor (Y + %d) com bit %d: %u\n", i, 4 + i, sucessor);
  }
  
  printf("Fim do Programa!\n");
  
  return (0);
}