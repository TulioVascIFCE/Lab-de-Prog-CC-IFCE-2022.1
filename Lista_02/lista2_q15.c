#include <stdio.h>

int main(){
  int resultado = 1;
  
  for (int i = 0; i <= 7; i ++){
    resultado *= (i == 0) ? 1 : 3;
    printf ("Base = 3; Expoente = %d; Resultado = %d\n", i, resultado);
  }

  printf("\nFim do Programa!\n");
  
  return (0);
}