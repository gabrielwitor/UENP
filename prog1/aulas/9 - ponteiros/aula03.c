/*
Estudo sobre ponteiros

Modificando o conteúdo de uma variável apontada
*/

#include <stdio.h>

int main(){
    int x = 5;
    int *p = &x;

    printf("Antes de modificar: %d\n",x);
    *p = 10;

    printf("Depois de modificar: %d\n",x);


    return 0;
}