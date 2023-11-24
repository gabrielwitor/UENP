// Passagem de estruturas como parâmetros de função

#include <stdio.h>

struct ponto
{
    int x;
    int y;
};

void imprime(struct ponto p){
    printf("Coordenadas: (%d,%d)",p.x,p.y);
}

void insere(struct ponto *p){
    printf("Digite a coordenada x e y: ");
    scanf("%d %d",&p->x,&p->y);
};



int main(){
    struct ponto p = {1,2};

    insere(&p);
    imprime(p);

    return 0;
}