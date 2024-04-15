/*
Estudo sobre ponteiros

Operação de atribuição com ponteiros
*/
#include <stdio.h>

int main(){
    int *p1,*p2;

    int x = 10;

    p1 = &x;
    printf("Conteudo de x apontado por p1: %d\n",*p1);

    p2 = p1;
    printf("Conteudo de x apontado por p2: %d\n",*p2);

    return 0;
}