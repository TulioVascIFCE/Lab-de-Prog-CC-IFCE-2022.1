#include <stdio.h>
#include <stdlib.h>

#define QTD_ARMARIOS 8

int main(){

  unsigned char mapa = 0;
  int aleatorio;

  for (int i = 0; i < 100; i++){
    aleatorio = rand() % QTD_ARMARIOS;
    printf ("%X\n", aleatorio);
  }
  
  //printf ("%X\n", mapa);

  return EXIT_SUCCESS;
}

/*
v[k] = v[k]^v[k+1];
v[k+1] = v[k]^v[k+1];
v[k] = v[k]^v[k+1];
*/