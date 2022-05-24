#include <stdio.h>

#define TAMANHO 100

int main () {
	char str1 [TAMANHO], str2 [TAMANHO], aux;
	int i, j, k;

	puts ("Entre com a primeira string:");
	scanf("%[^\n]%*c", str1);
	//getchar(); -> %*c acima

	puts ("Entre com a segunda string:");
	scanf("%[^\n]%*c", str2);
	//getchar(); -> %*c acima

	puts("As strings originais são:");
	
	puts("String 1:");
	i = 0;
	while(*(str1 + i) != '\0') {
		printf("%c",*(str1 + i));
		i++;
	}
	puts("");
	
	puts("String 2:");
	j = 0;
	while(*(str2 + j) != '\0') {
		printf("%c",*(str2 + j));
		j++;
	}
	puts("");

	//Trocando as String com base na limitação de tamanho:
	k = 0;
	if (i >= j) {
		while (*(str2 + k) != '\0') {
			aux = *(str1 + k);
			*(str1 + k) = *(str2 + k);
			*(str2 + k) = aux;
			k++;
		}
		*(str1 + k) = '\0';
	} else {
		while (*(str1 + k) != '\0') {
			aux = *(str1 + k);
			*(str1 + k) = *(str2 + k);
			*(str2 + k) = aux;
			k++;
		}
		*(str2 + k) = '\0';
	}
	
	puts ("As strings trocadas ficam:");
	
	puts ("String 1:");
	i = 0;
	while (*(str1 + i) != '\0') {
		printf("%c",*(str1 + i));
		i++;
	}
	puts ("");
	
	puts("String 2:");
	j = 0;
	while(*(str2 + j) != '\0') {
		printf("%c",*(str2 + j));
		j++;
	}
	puts("");
	
	return 0;
}