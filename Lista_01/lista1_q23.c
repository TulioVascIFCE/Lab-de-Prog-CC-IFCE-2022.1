#include <stdio.h>

int main(){
  unsigned int numero, contrario, primeiro, segundo, terceiro;

  puts("Entre com um numero natural de 3 digitos:");
  scanf("%ud", &numero);

  primeiro = numero/100;
  segundo = (numero - primeiro * 100)/10;
  terceiro = ((numero - primeiro * 100) - segundo * 10);
  
  contrario = (terceiro * 100) + (segundo * 10) + (primeiro);
  
  printf("Numero digitado: %u\nNumereo ao contrario: %u\n",numero, contrario);
  
  return (0);
}