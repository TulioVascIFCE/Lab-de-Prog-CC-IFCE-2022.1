#include <stdio.h>

int main(){
  
  int fatorial;

  puts("O fatorial dos valores impares situados na faixa de 1 a 10:");

  for (int i = 1; i <= 10; i+=2){
    fatorial = i;
    for (int j = 1; j < i; j++){
      fatorial *= j;
    }
    printf("Farorial de %d = %d\n", i, fatorial);
  }

  printf("\nFim do Programa!\n");
  
  return (0);
}