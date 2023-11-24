/*
Dada a estrutura a seguir representando as coordenadas de um ponto no sistema cartesiano.
Implemente uma funçao que, dado dois pontos fornecidos pelo usuario, calcule a distância
entre eles.

O cálculo da distância entre dois pontos é dado por: 

distância = sqrt((x1-x2)**2 + (y1-y2)**2) 
*/

#include <stdio.h>
#include <math.h>

struct ponto{
    int x;
    int y;
};

float calcdist(struct ponto *p){
    float dist = sqrt(pow((p[0].x - p[1].x),2) + pow((p[0].y - p[1].y),2));
    return dist;
}

int main(){
    struct ponto p[2];

    for(int i = 0; i < 2; i++){
        printf("Digite as coordenadas x e y: ");
        scanf("%d %d",&p[i].x,&p[i].y);
    }

    printf("\nA distância entre os pontos é: %.3f",calcdist(p));

    return 0;
}