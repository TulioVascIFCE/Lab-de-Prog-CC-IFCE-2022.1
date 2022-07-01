/*
	Crie uma Estrutura disciplina em que um dos campos corresponde também a uma estrutura professor.
*/

#include <stdio.h>
#include <stdlib.h>

struct professor{
	char matricula, departamento;
};

struct disciplina{
    int codigo;
	char horas;
	struct professor *docente;
};

int main ()
{
    struct disciplina calculo;
	struct professor rui;
	
	calculo.docente = &rui;

    return 0;
}