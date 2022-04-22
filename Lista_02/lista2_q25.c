#include <stdio.h>

int main(){
  float pi = 0, parcela;
  
  puts("Aproximacoes paa o Pi:");
  
  for (int n = 1; n <= 10000; n++){
    parcela = (float) 4 / ((2 * n) - 1);
    pi += (((n - 1) % 2) == 0) ? parcela : ((-1) * parcela);
    if (n % 100 == 0) printf("n: %d, Pi = %f\n", n, pi);
  }
  
  printf("\nFim do Programa!\n");
  
  return (0);
}