/*
Crie um programa que contenha uma matriz de float com três linhas e três
colunas. Imprima o endereço de cada posição dessa matriz.
*/

#include <stdio.h>

int main(){
    float matriz[3][2] = {{0,1},{2,3},{4,5}}, * p = &matriz[0][0];

    for(int i = 0; i < 3 * 2; i++){
        printf("Valor do elemento: %f | endereço do elemento: %p\n",*(p+i),(p+i));
    }

    return 0;
}