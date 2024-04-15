/*
Crie um programa que contenha um array de float com 10 elementos.
Imprima o endereço de cada posição desse array
*/

#include <stdio.h>

int main(){

    float array[10], * p = array;

    for(int i = 0; i < 10; i++){
        printf("\nEndereço do elemento [%d]: %p",i,(p+i));
    }

    return 0;
}