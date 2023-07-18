/*
Leia um numero real e imprima a quinta parte desse número
*/

#include <stdio.h>

int main(){

    int numero;

    printf("Digite um valor: ");
    scanf("%d",&numero);

    printf("A quinta parte de %d e %d",numero,numero/5);

    return 0;
}