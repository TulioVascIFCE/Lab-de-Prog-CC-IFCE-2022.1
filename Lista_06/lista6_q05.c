/*
	Crie uma Estrutura disciplina em que um dos campos corresponde também a uma estrutura professor.
*/

#include <stdio.h>
#include <stdlib.h>

struct professor{
	char matricula[5], departamento[10];
};

struct disciplina{
    int codigo;
	char horas[8];
	struct professor *docente;
};

int main ()
{
    struct disciplina calculo;
	struct professor rui;
	
	calculo.docente = &rui;

    return 0;
}