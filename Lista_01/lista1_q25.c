#include <stdio.h>

int main(){
  int segundos_in, segundos_out, minutos, horas;

  puts("Entre com o tempo em segundos:");
  scanf("%d", &segundos_in);

  horas = segundos_in/3600;
  minutos = (segundos_in - (3600 * horas))/60;
  segundos_out = (segundos_in - (3600 * horas)) - (60 * minutos);

  printf("%d segundos valem %d horas, %d minutos e %d segundos\n", segundos_in, horas, minutos, segundos_out);
  
  return (0);
}