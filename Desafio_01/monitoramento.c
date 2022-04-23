#include <stdio.h>
#include <stdlib.h>

//  Macro para auxiliar a gerar inteiros pseudo-aleatórios entre 0 e 7

#define QTD_ARMARIOS 8

//  Funções para evitar repetições e tentar o código mais limpo

unsigned char ocupandoArmarios (unsigned char);
unsigned char desocupandoArmarios (unsigned char);
void imprimirMapa (unsigned char);

int main () {
  //  Declarando Variáveis
  
  unsigned char menu, armarios = 0;
  
  //  Entrando no Programa
  
  do {    
    //  Apresentando o Menu
    puts ("Olá usuario!");
    puts ("Escolha umas das opções do Menu");
    puts ("1. Ocupar Armario");
    puts ("2. Desocupar Armario");
    puts ("3. Sair");
    
    //  Lendo a opção do Menu
    scanf ("%hhu", &menu);

    switch (menu) {
      case 1:
        
        //  Ocupando os armários de modo aleatório
        armarios = ocupandoArmarios (armarios);
        imprimirMapa (armarios);
        break;
      
      case 2:
        
        //  Selecionando o armário que será desocupado
        puts ("Escolha uma posicao para desocupar:");
        imprimirMapa (armarios);
        armarios = desocupandoArmarios(armarios);
        imprimirMapa (armarios);
        break;
      
      default:
        
        if (menu != 3) puts("Opção Invalida");
        break;
      
      }
    
    } while (menu != 3);
  
  printf("\nFim do Programa\n");
  
  return EXIT_SUCCESS;
  }

//  Função para ocupar armários:
/////////////////////////////////////////////////////////
unsigned char ocupandoArmarios (unsigned char armarios) {
  unsigned char aux;
  aux = 1 << (rand() % QTD_ARMARIOS);
  aux = armarios | aux;
  if (armarios == aux) {
    puts("Atribuicao invalida -- Posicao ja ocupada");
    }
  else armarios = aux;  
  return armarios;
}
/////////////////////////////////////////////////////////

//  Função para desocupar um armário:
////////////////////////////////////////////////////////////
unsigned char desocupandoArmarios (unsigned char armarios) {
  unsigned char aux;
  scanf ("%hhu", &aux);
  if (aux < 0 || aux > 7) {
    puts("Atribuicao invalida -- Posicao invalida");
    }
  else aux = armarios & (~(1 << aux));
  if (armarios == aux) {
          puts("Atribuicao invalida -- Posicao ja desocupada");
    }
  else armarios = aux;
  return armarios;
  }
/////////////////////////////////////////////////////////////


//  Função para exibir os armários:
/////////////////////////////////////////////
void imprimirMapa (unsigned char armarios) {
  unsigned char aux;
  printf("Armarios:\t");
  for (int j = 7; j >= 0; j--) {
    aux = (armarios & (1 << j)) ? 1 : 0;
    printf("%u", aux);
    }
  printf ("\t(0-Desocupado 1-Ocupado)");
  printf ("\nPosicoes:\t76543210\n");
  }
////////////////////////////////////////////