#include <stdio.h>

struct node
{
    int x;
    int y;
    struct node *nextNode;
};

void removerLista (int, struct node *);

int main ()
{
    struct node nodeA, nodeB, nodeC, nodeD, *nodeHead;
    int lista;
    nodeA.x = 0;
    nodeA.y = 1;
    nodeA.nextNode = &nodeB;
    nodeB.x = 2;
    nodeB.y = 3;
    nodeB.nextNode = &nodeC;
    nodeC.x = 4;
    nodeC.y = 5;
    nodeC.nextNode = &nodeD;
    nodeD.x = 6;
    nodeD.y = 7;
    nodeD.nextNode = NULL;

    /*
    do
    {
        //printf("Valores de X: %d:%d:%d:%d", lista 1, lista 2, lista 3, lista 4);
        puts("Escolha uma lista para deletar?");
        scanf("%d", &lista);


    }
    */
    
    removerLista (nodeA);

    //printf("nodeC.y = \n", nodeA.nextNode->nextNode->y);

    return 0;

}

void removerLista (struct node *nodeTest)
{
    for ( nodeTest = 0; nodeTest != NULL; nodeTest = nodeTest->nextNode ) printf ("%d/n", p);
}


/*
void removerLista (int lista, struct node *nodeA)
{
    int *aux ;
    switch (lista)
    {
      case 0:
        aux = &nodeA.nextNode;
        nodeA.nextNode = NULL;
        break;
      case 1:
        aux = &nodeB.nextNode;
        nodeB.nextNode = NULL;
        break;
      case 2:
        aux = &nodeC.nextNode;
        nodeC.nextNode = NULL;
        break;
      case 3:
        aux = &nodeD.nextNode;
        nodeD.nextNode = NULL;
        break;
      default:
        puts("Número da lista inválido!");
    }

}
*/