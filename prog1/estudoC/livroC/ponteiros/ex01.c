/*
Escreva um programa que contenha duas variáveis inteiras. Compare seus
endereços e exiba o maior endereço.
*/

#include <stdio.h>

int main(){
    int x; int y;

    printf("\nEndereço de x: %p",&x);
    printf("\nEndereço de y: %p",&y);

    printf("\nMaior endereço: %p", (&x>&y)? &x: &y);



    return 0;
}