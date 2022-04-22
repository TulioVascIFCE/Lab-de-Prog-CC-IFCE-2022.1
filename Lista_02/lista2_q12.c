#include <stdio.h>

int main(){
  int numero, tabuada, fim;

  do{
    puts ("Entre com o numero que deseja ver a tabuada");
    scanf("%d", &numero);

    if (numero < 1) continue;
    
    puts("Menu:");
    puts("1: Soma");
    puts("2: Subtracao");
    puts("3: Produto");
    puts("4: Divisao");
    scanf("%d", &tabuada);
    
    switch (tabuada){
      case 1:
        for (int i = 0; i < 11; i ++) printf("%d + %d = %d\n", numero, i, numero + i);
        break;
      case 2:
        for (int i = 0; i < 11; i ++) printf("%d - %d = %d\n", numero, i, numero-i);
        break;
      case 3:
        for (int i = 0; i < 11; i ++) printf("%d x %d = %d\n", numero, i, numero * i);
      break;
      case 4:
        for (int i = 1; i < 11; i ++) printf("%d / %d = %.2f\n", numero, i, (float) numero / i);
      break;
    default:
      puts("Operacao Invalida!");
    }

    fim = 0;
    
  }while(fim);
  
  puts("Fim do Prorama!");
  
  return (0);
}