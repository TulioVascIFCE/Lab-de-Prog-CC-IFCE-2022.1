#include <stdio.h>
#include <stdlib.h>

//  Macro para gerar inteiros aleatórios entre 0 e 7
#define QTD_ARMARIOS 8

int main(){

  //  Declarando Variáveis
  unsigned char menu, aleatorio, aux, armarios = 0;
  
  //  Entrando no Programa
  do {
    puts("");
    //  Apresentando o Menu
    puts("Olá usuario!");
    
    puts("Escolha umas das opções do Menu");
    
    puts("1. Ocupar Armario");
    puts("2. Desocupar Armario");
    puts("3. Sair");
    
    //  Lendo a opção do Menu
    scanf("%hhu", &menu);

    switch(menu){
      
      case 1:
        
        //  Ocupando um armário qualquer
        aleatorio = 1 << (rand() % QTD_ARMARIOS);
        printf("%u\n", aleatorio);
        armarios = armarios | aleatorio;
        
        //  Exibindo os armarios
        printf("Estado dos Armarios: ");
        for (int j = 7; j >= 0; j--){
          aux = (armarios & (1 << j)) ? 1 : 0;
          printf("%u", aux);
        }
        printf(" (0-Desocupado 1-Ocupado)");
        printf("\nPosicoes: \t\t\t76543210\n");
        
        break;
      
      case 2:

        //  Desocupando um armário selecionado
        puts("Escolha um armario para desocupar:");

        //  Exibindo os armarios
        printf("Estado dos Armarios: ");
        for (int j = 7; j >= 0; j--){
          aux = (armarios & (1 << j)) ? 1 : 0;
          printf("%u", aux);
        }
        printf(" (0-Desocupado 1-Ocupado)");
        printf("\nPosicoes: \t\t\t76543210\n");

        //  Lendo a posição que será desocupada
        scanf("%hhu", &aux);

        //  Desocupando o armario selecionado
        armarios = armarios & (~(1 << aux));

        //  Exibindo os armarios
        printf("Estado dos Armarios: ");
        for (int j = 7; j >= 0; j--){
          aux = (armarios & (1 << j)) ? 1 : 0;
          printf("%u", aux);
        }
        printf(" (0-Desocupado 1-Ocupado)");
        printf("\nPosicoes: \t\t\t76543210\n");

        break;

      default:

        if (menu < 1 || menu > 3) puts("Opção Invalida");

        break;

    }
    
  }while(menu != 3);

  printf("\nFim do Programa\n");
  
  return EXIT_SUCCESS;
}