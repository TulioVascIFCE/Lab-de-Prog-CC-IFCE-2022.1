#include <stdio.h>

int main(){
  short flag, aux = 0;
  int entrada, maior, menor, produto;
  
  do {
    //flag = 1;
    puts("Entre com um inteiro positivo ou negativo e par para sair:");
    scanf("%d", &entrada);
    flag = ((entrada <= 0) && (entrada % 2 == 0)) ? 0 : 1;
    if (aux == 0){
      aux ++;
      maior = entrada;
      menor = entrada;
      produto = maior * entrada;
      printf("Maior: %d\t Menor: %d\nProduto do Maior pelo Menor:%d\n", maior, menor, produto); 
      continue;
    }
    maior = (entrada >= maior) ? entrada : maior;
    menor = (entrada <= menor) ? entrada : menor;
    produto = maior * menor;
    printf("Maior: %d\t Menor: %d\nProduto do Maior pelo Menor:%d\n", maior, menor, produto);
  }while (flag);
  
  printf("\nFim do Programa!\n");

  return (0);
}
