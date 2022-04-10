#include <stdio.h>

int main(){
  int hora_mes;
  float hora_valor, desconto, salario_bruto, salario_liquido;
  
  puts("Entre com o valor da hora aula:");
  scanf("%f", &hora_valor);
  puts("Entre com o total de horas no mes:");
  scanf("%d", &hora_mes);
  puts("Entre com o valor do desconto do INSS:");
  scanf("%f", &desconto);
  
  salario_bruto = hora_valor * hora_mes;
  salario_liquido = salario_bruto * (1 - desconto);

  printf("O salario bruto é: %.2f\nO salario liquido é: %.2f\n", salario_bruto, salario_liquido);
  
  return (0);
}