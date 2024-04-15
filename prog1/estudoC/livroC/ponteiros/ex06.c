/*
Crie um programa que contenha um array com cinco elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo
valores pares.
*/

#include <stdio.h>

void imprimirNumerosPares(int n, int *p){
    for(int i = 0; i < n; i++)
        if(*(p+i) % 2 == 0)
            printf("Elemento par: %d | Endereço: %p\n",*(p+i),(p+i));
}

int main(){
    int array[5], *p = array;

    for(int i = 0; i < 5; i++){
        printf("Digite o valor do elemento %d: ",i);
        scanf("%d",p+i);
    }

    imprimirNumerosPares(5,p);

    return 0;
}