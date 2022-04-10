#include <stdio.h>

int main(){
  float raio, diametro, circunferencia, area;

  puts("Entre com o valor do raio:");
  scanf("%f", &raio);

  printf("O valor do diametro fica: %f\n", 2 * raio);
  printf("O valor da circunferencia fica: %f\n", 2 * 3.14159 * raio);
  printf("O valor da area fica: %f\n", 3.14159 * raio * raio);
  
  return (0);
}