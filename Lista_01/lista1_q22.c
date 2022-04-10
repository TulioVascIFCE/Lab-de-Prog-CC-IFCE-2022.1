#include <stdio.h>

int main(){
  char vetor_caracteres[14] = {'A', 'B', 'C', 'a', 'b', 'c', '0', '1', '2', '$', '*', '+', '/', ' '};

  for(int aux = 0; aux < 14; aux++){
    printf("O numero de caractere do %c e: %d\n", vetor_caracteres[aux], vetor_caracteres[aux]);
  }

  return (0);
}