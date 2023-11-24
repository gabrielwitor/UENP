// Retornando uma estrutura

#include <stdio.h>

struct ponto
{
    int x;
    int y;
};

struct ponto insere(void){
    struct ponto p;
    printf("Digite as coordenadas: (x y) ");
    scanf("%d %d",&p.x,&p.y);
    return p;
}

void imprime(struct ponto p){
    printf("Coordenadas: (%d,%d)",p.x,p.y);
}


int main(){
    struct ponto p = {1,2};

    p = insere();
    imprime(p);

    return 0;
}