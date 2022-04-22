#include <stdio.h>

int main(){
  int menor, maior, aux, count = 0;

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
    if (i % 3 == 0) count += 1;
  }
  
  printf ("Numeros divisiveis por 3 no intervalo: %d\n", count);
  printf("\nFim do Programa!\n");
  
  return (0);
}