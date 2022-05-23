#include <stdio.h>

#define TAMANHO 100

int main () {
	char str1 [TAMANHO], str2 [TAMANHO], aux;
	int k;

	puts ("Entre com a primeira string:");
	scanf("%[^\n]", str1);
	getchar();

	puts ("Entre com a segunda string:");
	scanf("%[^\n]", str2);
	getchar();

	puts("As string originais são:");
	
	puts("String 1:");
	k = 0;
	while(*(str1 + k) != '\0') {
		printf("%c",*(str1 + k));
		k++;
	}
	puts("");
	
	puts("String 2:");
	k = 0;
	while(*(str2 + k) != '\0') {
		printf("%c",*(str2 + k));
		k++;
	}
	puts("");
	
	puts ("Trocando as strings:");
	k = 0;
	while((*(str1 + k) != '\0') || (*(str2 + k) != '\0')){
		aux = *(str1 + k);
		*(str1 + k) = *(str2 + k);
		*(str2 + k) = aux;
		/*
		if ((*(str1 + k) == '\0') && (*(str2 + k) != '\0'))
			*(str2 + k) = '\0';
		if ((*(str1 + k) != '\0') && (*(str2 + k) == '\0'))
			*(str1 + k) = '\0';
		*/
		///*
		if ((*(str1 + k) != '\0') && (*(str2 + k) == '\0'))
			*(str2 + k) = '\0';
		if ((*(str1 + k) == '\0') && (*(str2 + k) != '\0'))
			*(str1 + k) = '\0';
		//*/
		k++;
	}

	puts("As string trocadas ficam:");
	
	puts("String 1:");
	k = 0;
	while(*(str1 + k) != '\0') {
		printf("%c",*(str1 + k));
		k++;
	}
	puts("");
	
	puts("String 2:");
	k = 0;
	while(*(str2 + k) != '\0') {
		printf("%c",*(str2 + k));
		k++;
	}
	puts("");
	
	return 0;
}