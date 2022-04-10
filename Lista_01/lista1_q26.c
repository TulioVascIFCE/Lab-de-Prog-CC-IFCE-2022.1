#include <stdio.h>
#include <math.h>

int main(){
  float coordenada_Ax, coordenada_Bx, ordenada_Ay, ordenada_By, quadrado_X, quadrado_Y, distancia;

  puts("Entre com a coordenada do ponto A:");
  scanf("%f", &coordenada_Ax);
  puts("Entre com a ordenada do ponto A:");
  scanf("%f", &ordenada_Ay);

  puts("Entre com a coordenada do ponto B:");
  scanf("%f", &coordenada_Bx);
  puts("Entre com a ordenada do ponto B:");
  scanf("%f", &ordenada_By);

  quadrado_X = (float)(coordenada_Bx - coordenada_Ax) * (coordenada_Bx - coordenada_Ax);
  quadrado_Y = (float) (ordenada_By - ordenada_Ay) * (ordenada_By - ordenada_Ay);
  
  distancia = (float) sqrt(quadrado_X + quadrado_Y);

  printf("A distancia entre os pontos A = (%.2f, %.2f) e B = (%.2f, %.2f) e %f", coordenada_Ax, ordenada_Ay, coordenada_Bx, ordenada_By, distancia);
  
  return (0);
}