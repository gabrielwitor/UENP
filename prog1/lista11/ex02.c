/*
Altere a função recursiva do exercício 1 de modo que o programa imprima todos os números
pares de 0 até n em ordem crescente.
*/

#include <stdio.h>

int imprimirCres(int estado, int n){
    if (estado % 2 == 0)
        printf("%d ",estado);

    if(estado == n)
        return estado;

    return imprimirCres(estado+1,n);
}

int main(){
    int numero;
    printf("Digite um valor par maior que 0: ");
    scanf("%d",&numero);

    printf("Numeros pares de 0 até %d em ordem crescente:\n",numero);
    imprimirCres(0,numero);

    return 0;
}