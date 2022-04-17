#include <stdio.h>

int main ()
{
  int menu;

  puts("Inicio do Programa");
  
  while (1)
  {
    puts("Insira um numero: ");
    scanf("%d", &menu);
    if (menu == 0)
    {
      break;
    }
    switch (menu)
    {
      case 1:
        puts("Domingo");
        break;
      case 2:
        puts("Segunda-Feira");
        break;
      case 3:
        puts("Terca-Feira");
        break;
      case 4:
        puts("Quarta-Feira");
        break;
      case 5:
        puts("Quinta-Feira");
        break;
      case 6:
        puts("Sexta-Feira");
        break;
      case 7:
        puts("Sabado");
        break;
      default:
        puts("Numero de dia nao valido!");
    }
  }

  puts("Fim do Programa");
  
  return (0);
}