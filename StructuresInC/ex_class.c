#include <stdio.h>
#include <stdlib.h>

#define TAM 10

struct node
{
    int x;
    int y;
    struct node *nextNode;
};

int main (int argc, char argv[])
{
    struct node nodeArray[TAM], *nodeHead;
	int aux;
	
	for( int i = 0; i < TAM; i++ )
		if( i != TAM - 1 ) nodeArray[i].nextNode = &nodeArray[i+1];
		else nodeArray[i].nextNode = NULL;

	nodeHead = nodeArray;
	aux = 1;
	
    while ( nodeHead != NULL )
	{
		printf("Lista %d ok\n", aux);
		nodeHead = nodeHead->nextNode;
		aux++;
	}
	
    return 0;
}