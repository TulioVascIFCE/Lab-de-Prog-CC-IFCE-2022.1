#include <stdio.h>

#define TAM 8

int main ()
{
    int bin[TAM], dec = 0;

	for( int i = 0; i < TAM; i++ ){
		scanf("%d", (bin + i));
		if (i - 1 < 0) dec += *(bin + i);
		else dec += (2 << (i-1)) * *(bin + i);
		printf("-%d\n", dec);
	}

	printf("%d\n", dec);
	
    return 0;
}