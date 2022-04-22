#include <stdio.h>

int main(){
  float dividendo, divisor, resultado = 0;
  
  do {

    //Entrada de dados
    puts("Entre com o dividendo:");
    scanf("%f", &dividendo);
    puts("Entre com o divisor:");
    scanf("%f", &divisor);

    //Processamento
    if (divisor == 0){
      puts("Divisor inválido. Tente novamente!");
      continue;
    }
    resultado = dividendo / divisor;

    //Saida
    printf("A divisão de %f por %f fica: %f\n", dividendo, divisor, resultado);
    
  }while (resultado == 0);
  
  printf("Fim do Programa!\n");

  return (0);
}
