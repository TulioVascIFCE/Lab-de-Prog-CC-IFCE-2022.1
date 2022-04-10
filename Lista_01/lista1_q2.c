#include <stdio.h>

//Questão 2

int main()
{
    int x;
  
    printf("Entre com um valor inteiro: ");
    scanf("%d", &x);

    printf("Valor em Hexadecimal: %X\nValor em Octal: %o\n", x, x);

    return (0);
}