//Questão 7:

#include <stdio.h>

int main()
{

  int horas, minutos, segundos, total_segundos;

  printf("Entre com o valor inteiro da horas: ");
  scanf("%d", &horas);

  printf("Entre com o valor inteiro dos minutos: ");
  scanf("%d", &minutos);

  printf("Entre com o valor inteiro dos segundos: ");
  scanf("%d", &segundos);

  total_segundos = segundos + 60 * minutos + 60 * 60 * horas;

  printf("O total de segundos fica: %d\n", total_segundos);

  return(0);
}
