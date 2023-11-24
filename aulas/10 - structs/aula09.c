/*
COMANDO TYPEDEF

-> Cria um "apelido" paratipos já existentes
*/

#include <stdio.h>

struct ponto{
    int x;
    int y;
};

typedef struct ponto ponto;

int main(){
    ponto p = {0,1};

    printf("Coordenadas: (%d,%d)",p.x,p.y);

    return 0;
}