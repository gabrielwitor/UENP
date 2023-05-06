/*
Faça um programa para ler as coordenadas (X, Y) de um ponto no sistema cartesiano,
indicando à qual quadrante ele pertence. Imprima o quadrante correspondente que estas
coordenadas pertencem, que pode ser: primeiro, segundo, terceiro, quarto, eixo x, eixo y,
origem. Será eixo x quando a coordenada y for zero. Será eixo y quando a coordenada x
for zero. Os outros basta achar a localização do ponto no plano cartesiano
*/

#include <stdio.h>

int main(){
    int x, y;

    printf("\nRelembrando o plano cartesiano:\n\n");
    printf("            ^           \n");
    printf("            |           \n");
    printf("  Segundo   |  Primeiro \n");
    printf("  Quadrante |  Quadrante\n");
    printf("  (-x, +y)  |  (+x, +y) \n");
    printf("            |           \n");
    printf("------------|------------>\n");
    printf("            |           \n");
    printf("  Terceiro  |  Quarto   \n");
    printf("  Quadrante |  Quadrante\n");
    printf("  (-x, -y)  |  (+x, -y) \n");
    printf("            |           \n\n");

    printf("Digite as coordenadas de x e y no plano cartesiano: ");
    scanf("%i %i",&x,&y);

    if ((x == 0) && (y == 0)){
        printf("\nO ponto (0,0) pertence a origem.");
    }
    else if ((x == 0) && (y != 0)){
        printf("\nO ponto (0,%i) pertence ao eixo y.",y);
    }
    else if ((x == 0) && (y != 0)){
        printf("\nO ponto (%i,0) pertence ao eixo x.",y);
    }
    else if ((x > 0) && (y > 0))
    {
        printf("\nO ponto (%i,%i) pertence ao primeiro quadrante.",x,y);
    }
    else if ((x < 0) && (y > 0))
    {
        printf("\nO ponto (%i,%i) pertence ao segundo quadrante.",x,y);
    }
    else if ((x < 0) && (y < 0))
    {
        printf("\nO ponto (%i,%i) pertence ao terceiro quadrante.",x,y);
    }
    else if ((x > 0) && (y < 0))
    {
        printf("\nO ponto (%i,%i) pertence ao quarto quadrante.",x,y);
    }
    
    
    return 0;
}

