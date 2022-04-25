#include <stdio.h>
#include <stdlib.h>

//  Macro para auxiliar a gerar inteiros pseudo-aleatórios entre 0 e 7:
#define QTD_ARMARIOS 8

//  Funções para evitar repetições e tentar o código mais limpo:
unsigned char ocupandoArmarios (unsigned char);
unsigned char desocupandoArmarios (unsigned char);
void imprimirMapa (unsigned char);

int main () {
  //  Declarando Variáveis:
  unsigned char menu, armarios = 0;
  
  //  Entrando no Programa:
  do {
    //  Mapa dos Armarios atualizado:
    imprimirMapa (armarios);
    
    //  Apresentando o Menu:
    puts ("Olá usuario!");
    puts ("Escolha umas das opções do Menu");
    puts ("1. Ocupar Armário");
    puts ("2. Desocupar Armário");
    puts ("3. Sair");
    
    //  Lendo a opção do Menu:
    scanf ("%hhu", &menu);

    switch (menu) {
      case 1:
        //  Ocupando os armários de modo aleatório:
        armarios = ocupandoArmarios (armarios);
        break;
      
      case 2:
        //  Selecionando o armário que será desocupado:
        puts ("Escolha uma posição para desocupar:");
        armarios = desocupandoArmarios(armarios);
        break;
      
      default:
        if (menu != 3) puts("Opção Inválida");
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
  do{
    aux = 1 << (rand() % QTD_ARMARIOS);
    aux = armarios | aux;
    if (aux == 255) {
      puts("Todos os armários ocupados");
      break;
    }
  } while (armarios == aux);
  armarios = aux;  
  return armarios;
}
/////////////////////////////////////////////////////////

//  Função para desocupar um armário:
////////////////////////////////////////////////////////////
unsigned char desocupandoArmarios (unsigned char armarios) {
  unsigned char aux, flag;
  do{
    if (armarios == 0) {
      puts ("Todos armários já desocupados");
      break;
    }
    flag = 0;
    scanf ("%hhu", &aux);
    if (aux > 7) {
      puts ("Posição Invalida. Escolha outra");
      flag = 1;
      continue;
    }
    aux = armarios & (~(1 << aux));
    if (aux == armarios) {
      puts ("Posição já desocupada. Escolha outra.");
      continue;
    }
  } while ((armarios == aux) || (flag == 1));
  armarios = aux;
  return armarios;
  }
/////////////////////////////////////////////////////////////

//  Função para exibir os armários:
/////////////////////////////////////////////
void imprimirMapa (unsigned char armarios) {
  unsigned char aux;
  printf("Armários:\t");
  for (int j = 7; j >= 0; j--) printf("%u", aux = (armarios & (1 << j)) ? 1 : 0);
  printf ("\t(0-Desocupado 1-Ocupado)");
  printf ("\nPosições:\t76543210\n");
  }
////////////////////////////////////////////