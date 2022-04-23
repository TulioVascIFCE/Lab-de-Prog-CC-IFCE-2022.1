#include <stdio.h>
#include <stdlib.h>

//  Macro para gerar inteiros aleatórios entre 0 e 7
#define QTD_ARMARIOS 8

int main(){

  //  Declarando Variáveis
  unsigned char menu, aleatorio, aux, mapa_binario, armarios = 0;
  
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
        printf("Mapa dos Armarios:\t");
        for (int j = 7; j >= 0; j--){
          aux = 1 << j;
          mapa_binario = (armarios & aux) ? 1 : 0;
          printf("%u", mapa_binario);
        }
        printf("\nPosicoes:\t\t\t76543210\n");
        
        break;
      
      case 2:

        //  Desocupando um armário selecionado
        puts("Escolha um armario para desocupar:");

        //  Exibindo os armarios
        printf("Mapa dos Armarios:\t");
        for (int j = 7; j >= 0; j--){
          aux = 1 << j;
          mapa_binario = (armarios & aux) ? 1 : 0;
          printf("%u", mapa_binario);
        }
        printf("\nPosicoes:\t\t\t76543210\n");

        //  Lendo a posição que será desocupada
        scanf("%hhu", &aux);

        //  Desocupando o armario selecionado
        armarios = armarios & (~(1 << aux));

        //  Exibindo os armarios
        printf("Mapa dos Armarios:\t");
        for (int j = 7; j >= 0; j--){
          aux = 1 << j;
          mapa_binario = (armarios & aux) ? 1 : 0;
          printf("%u", mapa_binario);
        }
        printf("\nPosicoes:\t\t\t76543210\n");
        
        break;
      
      default:
        
        break;
      
    }
    
  }while(menu != 3);
  /*
  for (int i = 0; i < 100; i++){
    aleatorio = rand() % QTD_ARMARIOS;
    printf ("%X\n", aleatorio);
  }
  
  //printf ("%X\n", mapa);
  */

  printf("\nFim do Programa\n");
  
  return EXIT_SUCCESS;
}

/*
v[k] = v[k]^v[k+1];
v[k+1] = v[k]^v[k+1];
v[k] = v[k]^v[k+1];
*/