#include <stdio.h>

int main()
{
    printf("Resultado item a: %d\n", 7 + 3 * 6 / 2 - 1);
/*
    Resposta esperada: primeiro a divisão 6/2=3, o
    produto 3*3=9, a diferença 9-1=8, a soma 8+7=15.
*/
    printf("Resultado item b: %d\n", 2 % 2 + 2 * 2 - 2 / 2);
/*
    Resposta esperada: primeiro o resto inteiro da
    divisão 2/2, ou seja 2%2=0, o produto 2*2=4, a
    divisão 2/2=1, a soma 0+4=4 e por último a
    diferença entre 4 e 1, igual a 3.
*/
    printf("Resultado item c: %d\n", (3 * 9 * (3 + (9 * 3 / (3) ) ) ));
/*
    Resposta esperada: primeiro o produto 9*3=27, a
    divisão 27/(3)=9, a soma 3+9=12, por fim o
    produto 3*9*12=324.
*/
    return (0);
}
