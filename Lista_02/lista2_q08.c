#include <stdio.h>

int main(){
  
  float preco, entrada;
  int parcela;

  puts("Entre com o valor do produto:");
  scanf("%f", &preco);

  parcela = preco / 3;

  entrada = preco - (2 * parcela);

  printf("Entrada: %.2f\nParcelas: 2x de %d\n", entrada, parcela);
  
  return (0);
}