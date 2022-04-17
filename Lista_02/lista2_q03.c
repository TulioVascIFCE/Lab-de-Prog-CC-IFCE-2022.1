#include <stdio.h>

int main(){
  unsigned long int fatorial;
  int aux = 1;
  
  puts("Entre com um numero inteiro positivo:");
  scanf("%d", &fatorial);
  
  if (fatorial == 0){
    printf("O fatorial de %d fica: %d\n", fatorial, aux);
  }
  else{
    for (int i = fatorial; i > 1; i--){
      aux = aux * i;
    }
    printf("O fatorial de %d fica: %d\n", fatorial, aux);
  }
  
  return (0);
}