//Questão 6:

#include <stdio.h>

int main()
{
  char sexo;
  float altura, peso_ideal;
  
  printf("Entre com 'm' se homem ou 'f' se mulher: ");
  sexo = getchar();
  
  printf("Entre com o valor da sua altura em metros: ");
  scanf("%f", &altura);
  
  if (sexo == 'm')
  {
    peso_ideal = 72.7 * altura - 58;
    printf("Peso ideal para homens = %.2f\n", peso_ideal);
  }
  else
  {
    peso_ideal = 62.1 * altura - 44.7;
    printf("Peso ideal para mulheress = %.2f\n", peso_ideal);
  }
  
  return(0);
}