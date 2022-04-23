#include <stdio.h>

int main(){
  
  int aux, binario, octal, hexa, flag;
  
  printf("Decimal\tBianrio\t\tOctal\tHexadecimal\n");

  for (int i = 1; i <= 256; i++){
    
    printf("%d\t\t", i);
    
    //Binario
    for (int j = 8; j >= 0; j--){
      aux = 1 << j;
      binario = (i & aux) ? 1 : 0;
      printf("%d", binario);
    }

    printf("\t");
    //Octal
    for (int j = 6; j >= 0; j-=3){
      aux = 7 << j;
      aux = i & aux;
      octal = aux >> j;
      printf("%d", octal);
    }

    printf("\t\t\t");
    //Hexadecimal
    flag = 0;
    if (flag == 0){
      aux = 1 << 8;
      aux = i & aux;
      hexa = aux >> 8;
      printf("%d", hexa);
    }
    for (int j = 4; j >= 0; j-=4){
      aux = 15 << j;
      aux = i & aux;
      hexa = aux >> j;
      printf("%d", hexa);
    }
    
    puts("");    
  }
  //*/
  printf("Fim do Programa!\n");
  
  return (0);
}