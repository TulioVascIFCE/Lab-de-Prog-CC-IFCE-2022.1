#include <stdio.h>

struct node
{
    int x;
    int y;
    struct node *nextNode;
};

int main ()
{
    struct node nodeA, nodeB, nodeC, nodeD, *nodeHead;
	int aux, lista;

	nodeHead = &nodeA;
	nodeA.nextNode = &nodeB;
	nodeB.nextNode = &nodeC;
	nodeC.nextNode = &nodeD;
	nodeD.nextNode = NULL;
	
	aux = 1;
	
    while ( nodeHead != NULL )
	{
		printf("Lista %d:\n", aux);
		
		puts("Entre com o dado X:");
		scanf("%d", &nodeHead->x);
		
		puts("Entre com o dado Y:");
		scanf("%d", &nodeHead->y);

		nodeHead = nodeHead->nextNode;

		aux++;
	}

	nodeHead = &nodeA;

	aux = 1;
	
	while ( nodeHead != NULL )
	{
		printf("Lista %d:\n", aux);
		printf("X: %d\n", nodeHead->x);
		printf("Y: %d\n", nodeHead->y);

		nodeHead = nodeHead->nextNode;

		aux++;
	}
	
    return 0;
}