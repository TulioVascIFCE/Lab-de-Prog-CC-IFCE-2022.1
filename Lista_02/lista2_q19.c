#include <stdio.h>

int main(){
  int menor, maior, aux;
  float media;

  puts("Entre com o valor de A:");
  scanf("%d", &menor);

  puts("Entre com o valor de B:");
  scanf("%d", &maior);

  if (menor > maior){
    aux = menor;
    menor = maior;
    maior = aux;
  }

  aux = 0;
  
  for (int i = menor; i <= maior; i ++){
    aux += i;
  }
  
  media = (float) aux / (maior - menor + 1);
  
  printf("Soma acumulada: %d\n", aux);
  
  printf ("Media aritmetica dos numeros inteiros existentes entre %d e %d:\n%.2f", menor, maior, media);
  
  printf("\nFim do Programa!\n");
  
  return (0);
}