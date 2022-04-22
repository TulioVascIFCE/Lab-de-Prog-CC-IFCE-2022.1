#include <stdio.h>

int main(){
  
  int fim, j = 0, i = 0, y = 0, x = 0;

  puts("Pre-Icrementar: I -- Pos-Icrementar: X");
  while (fim){
    puts("");
    j = ++i;
    printf("I: %d; j = %d\n", i, j);
    y = x++;
    printf("X: %d; y = %d\n", x, y);
    fim = (y < 5) ? 1 : 0;
  }
  
  printf("\nFim do Programa!\n");
  
  return (0);
}