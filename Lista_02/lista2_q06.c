#include <stdio.h>
#include <stdlib.h>

void imprimirRelatorio(int, int, int, int);

int main(){
    int voto;
    int paulo=0, renata=0, branco=0, nulo=0;
    char c;

    do{   
        puts("Digite seu voto ou um número negativo para sair:");
        puts("5. Paulo");
        puts("7. Renata");
        puts("0. Branco");

        scanf("%d",&voto);
        getchar(); 

        puts("Confirmar? s: sim | outra tecla: não");
        c = getchar();

        if (c != 's') continue;

        switch (voto){

            case 0: // Para votos "branco"
                branco++;
                break;
            case 5: // Para votos "Paulo"
                paulo++;
                break;
            case 7: // Para votos "Renata"
                renata++;
                break;
            default: // Valores diferentes 
                nulo += (voto>0)?1:0;
        }
       
    } while (voto >= 0);

    // Imprimir a quantidade de votos
    printf("Resultado da eleição\n");
    printf("Quantidade de votos\n");
    printf("\t 5. Paulo: %d\n",paulo);
    printf("\t 7. Renata: %d\n",renata);
    printf("\t 0. Brancos: %d\n",branco);
    printf("\t Nulos: %d\n",nulo);

    // Relatorio
    imprimirRelatorio(paulo, renata, branco, nulo);

    return 0;
}


void imprimirRelatorio(int p, int r, int b, int n){
    int totalVotos = p + r + b + n;
    float pp, pr, pb, pn;

    pp = ( ( (float) p )/totalVotos) * 100;
    pr = ( ( (float) r )/totalVotos) * 100;
    pb = ( ( (float) b )/totalVotos) * 100;
    pn = ( ( (float) n )/totalVotos) * 100;

    puts("-------------");
    printf("Porcentagem de votos\n");
    printf("Quantidade de votos\n");
    printf("\t 5. Paulo: %.2f%%\n",pp);
    printf("\t 7. Renata: %.2f%%\n",pr);
    printf("\t 0. Brancos: %.2f%%\n",pb);
    printf("\t Nulos: %.2f%%\n",pn);

}