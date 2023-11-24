#include <stdio.h>

struct ponto{
    int x;
    int y;
};

int main(){
    struct ponto p;
    struct ponto *pp = &p; // *pp QUE APONTAPARA O ENDEREÇO DE P

    (*pp).x = 3;
    (*pp).y = 4;


    //FORMA SIMPLIFICADA

    pp -> x = 3;
    pp -> y = 4;

    printf("Coordenadas: (%d,%d)",*pp);

    printf("\nDigite a coordenada x: ");
    scanf("%d",&pp->x);

    printf("\nDigite a coordenada y: ");
    scanf("%d",&pp->y);

    printf("Coordenadas: (%d,%d)",(*pp).x,(*pp).y);


};