#include <stdio.h>

int main()
{
  float volume, comprimento, largura, altura;

  printf("Comprimento da caixa: ");
  scanf("%f", &comprimento);

  printf("Largura da caixa: ");
  scanf("%f", &largura);

  printf("Altura de caixa: ");
  scanf("%f", &altura);

  volume = comprimento * largura * altura;

  printf("O volume da caixa fica: %.3f\n", volume);

  return (0);
}