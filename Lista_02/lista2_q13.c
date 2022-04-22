#include <stdio.h>

int main(){
  int menor, maior, aux, soma = 0;

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
    if (i % 2 == 0) soma += i;
  }
  
  printf ("soma dos pares acumulada: %d\n", soma);
  printf("\nFim do Programa!\n");
  
  return (0);
}