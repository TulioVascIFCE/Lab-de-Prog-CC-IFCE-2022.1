#include <stdio.h>

int main(){
  int jose = 150, pedro = 110, anos = 0;
  
  while (jose > pedro){
    jose += 2;
    pedro += 3;
    anos +=1;
  }

  printf("Mantendo essa taxa de crescimento constante (o que e impossivel!) Pedro sera maior do que Jose em %d anos\n", anos);
  
  return (0);
}