#include <stdio.h>

int main(){
  short aux = 0;
  float entrada, maior, menor;
  
  do {
    puts("Entre com um numero N ou 0 para sair:");
    scanf("%f", &entrada);
    if (aux == 0){
      aux ++;
      maior = entrada;
      menor = entrada;
      printf("Maior: %f \t Menor: %f\n", maior, menor);
      continue;
    }
    maior = (entrada >= maior) ? entrada : maior;
    menor = (entrada <= menor) ? entrada : menor;
    printf("Maior: %f \t Menor: %f\n", maior, menor);
  }while (entrada != 0);
  
  printf("Fim do Programa!\n");

  return (0);
}
