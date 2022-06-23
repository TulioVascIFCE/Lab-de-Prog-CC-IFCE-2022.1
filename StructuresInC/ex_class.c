#include <stdio.h>
#include <stdlib.h>

#define TAM 10

struct node
{
    int x;
    int y;
    struct node *nextNode;
};

int main (int argc, char *argv[])
{
    struct node *nodeArray, *nodeHead;
	int aux, tam;

	 tam = atoi(argv[1]);

	nodeArray = (struct node *) malloc(tam * sizeof(struct node));
	if (!nodeArray){
		puts("Falha na solitação de memória!");
		exit(1);
	}
	
	for( int i = 0; i < tam; i++ )
		if( i != tam - 1 ) nodeArray[i].nextNode = &nodeArray[i+1];
		else nodeArray[i].nextNode = NULL;

	nodeHead = nodeArray;
	aux = 1;
	
    while ( nodeHead != NULL )
	{
		printf("Lista %d ok\n", aux);
		nodeHead = nodeHead->nextNode;
		aux++;
	}

	free(nodeArray);
	
    return 0;
}