#include <stdio.h>

int main(){
  int count = 0;
  
  puts("Tripla de Pitagoras:");
  
  for (int i = 3; i <= 500; i ++){
    for (int j = i + 1; j <= 500; j++){
      for (int k = j + 1; k <= 500; k++){
        if (i*i + j*j == k*k){
          printf("Cateto A: %d, Cateto B: %d, Hipotenusa: %d\n", i, j, k);
          count++;
        }
      }
    }
  }

  printf("Numero de Triplas: %d\n", count);
  
  printf("\nFim do Programa!\n");
  
  return (0);
}