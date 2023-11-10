/*
Estudos do dia 07/11/2023

Estudo de Ponteiros
*/

#include <stdio.h>

int main(){
    int x = 10;

    int *p = &x;

    printf("%d\n",*p); // imprimindo x pelo endereço da memória
    printf("%p\n",&x); // imprimindo o endereço de x
    printf("%p\n",p); // imprimindo o endereço de x pelo ponteiro


    return 0;
}