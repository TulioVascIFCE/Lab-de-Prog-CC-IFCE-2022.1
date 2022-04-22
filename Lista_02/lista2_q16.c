#include <stdio.h>

int main(){
  int somaDivTres = 0, somaDivCinco = 0;
  
  for (int i = 0; i <= 100; i ++){
    somaDivTres += (i % 3 == 0) ? i : 0;
    somaDivCinco += (i % 5 == 0) ? (201 - i) : 0;
  }

  puts("Intervalo [0, 100]");
  printf ("Somatorio numeros divisiveis por 3 = %d\n", somaDivTres);

  puts("Intervalo ]101, 200]");
  printf ("Somatorio numeros divisiveis por 5 = %d\n", somaDivCinco);
  
  printf("\nFim do Programa!\n");
  
  return (0);
}