#include <stdio.h>

int main ()
{
  int dias;
  float salario_bruto, salario_liquido;

  puts ("Quantos dias foram trabalhados: ");
  scanf ("%d", &dias);

  if (dias <= 10)
  {
    salario_bruto = (50.25 * dias);
    salario_liquido = (salario_bruto * 0.9);
  }
  else if (dias > 10 && dias <= 20)
  {
    salario_bruto = (50.25 * dias) * 1.2;
    salario_liquido = (salario_bruto * 0.9);
  }
  else if (dias > 20)
  {
    salario_bruto = (50.25 * dias) * 1.3;
    salario_liquido = (salario_bruto * 0.9);
  }

  printf("O salario mensal do funcionario sera de %.2f reais\n", salario_liquido);
  
  return (0);
}