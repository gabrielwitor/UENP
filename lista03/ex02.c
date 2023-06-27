/*
Faça um programa que receba 2 números inteiros quaisquer representados por x e y e
mostre, em ordem crescente, todos os números entre x e y cujo resto da divisão deles por
5 for igual a 2 ou igual a 3.
*/

#include <stdio.h>

int main(){
    int x, y;

    printf("Digite o valor de x e y: ");
    scanf("%d %d",&x,&y);

    for (; x <= y; x++){
        if (x % 5 == 2){
            printf("%d %% 5 = 2\n",x);
        } 
        else if(x % 5 == 3){
            printf("%d %% 5 = 3\n",x);
        }
    }

    return 0;
}