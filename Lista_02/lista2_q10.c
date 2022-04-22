#include <stdio.h>

int main(){
  
  for (int i = 15; i <= 90; i ++){
    if (i % 4 == 0) printf ("%d ", i*i);
  }

  printf("\nFim do Programa!\n");
  
  return (0);
}
