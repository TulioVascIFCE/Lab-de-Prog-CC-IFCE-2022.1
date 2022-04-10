#include <stdio.h>
#include <math.h>

int main(){
  float primeiro, segundo, terceiro, media_normal, media_geo;

  puts("Entre com o primeiro valor:");
  scanf("%f", &primeiro);
  puts("Entre com segundo valor:");
  scanf("%f", &segundo);
  puts("Entre com terceiro valor:");
  scanf("%f", &terceiro);

  media_normal = (primeiro + segundo + terceiro)/3;
  media_geo = powf((primeiro + segundo + terceiro),(float)1/3);

  printf("Para os valores informados a media normal fica %.2f, e a media geometrica fica %.2f\n", media_normal, media_geo);
  
  return (0);
}