#include <stdio.h>

int main()
{
  float celsius, fah;

  printf("Entre com a temperatura em Celsius: ");
  scanf("%f", &celsius);

  fah = ((9 * celsius) + 160) / 5;
  
  printf("A temperatura em Fahrenheit e %f\n", fah);

  return (0);
}