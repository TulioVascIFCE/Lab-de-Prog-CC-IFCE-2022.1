#include <stdio.h>

int main(){
  int menor, maior, aux;

  puts("Entre com o valor de A:");
  scanf("%d", &menor);

  puts("Entre com o valor de B:");
  scanf("%d", &maior);

  if (menor > maior){
    aux = menor;
    menor = maior;
    maior = aux;
  }
  
  for (int i = menor; i <= maior; i ++){
    if (i % 4 == 0) printf ("%d ", i*i);
  }

  printf("\nFim do Programa!\n");
  
  return (0);
}