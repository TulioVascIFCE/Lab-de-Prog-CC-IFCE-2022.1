#include <stdio.h>

int main(){
  
  long numero, aux, teste;
  short sete = 0;

  puts("Entre com um numero inteiro:");
  scanf("%ld", &numero);

  numero = (numero < 0) ? (-1) * numero : numero;

  aux = 1; 
  
  while (numero > aux){
      teste = numero % (10 * aux);
      teste = teste / aux;
      sete += (teste == 7) ? 1 : 0;
      aux *= 10;
  }
  
  printf("Numero de algorismos 7 em %ld = %d\n", numero, sete);

  printf("\nFim do Programa!\n");
  
  return (0);
}