#include <stdio.h>

int main(){
  int fahrenheit;
  
  for (int celsius = 10; celsius <= 100; celsius += 10){
    fahrenheit = (int) (celsius * (float) 9 / 5) + 32;
    printf ("Celsius = %d; Fahrenheit = %d\n", celsius, fahrenheit);
  }
  
  printf("\nFim do Programa!\n");
  
  return (0);
}