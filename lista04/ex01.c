/*
Faça uma função para calcular a área de “n” terrenos retangulares, em que “n” é informado
pelo usuário. O programa recebe como entrada o comprimento e a largura de cada terreno
e, ao final, exibe a sua  ́area correspondente.
*/

#include <stdio.h>

void rectarea(int n){
    float heigh, width;
    for (int i = 1 ; i<=n ; i++){ 
        printf("Digite o comprimento e a largura do terreno retangular: ");
        scanf("%f%f",&heigh,&width);
        printf("Area do terreno: %.2f metros quadrados.\n",heigh*width);
    }
}

int main(){
    int quantity;

    printf("Quantos terrenos deseja calcular a area? ");
    scanf("%d",&quantity);
    rectarea(quantity);

    return 0;
}