/*
Aula do dia 05/07/2023

Declaração de funções em C

Faça uma função que recebe um número e retorne verdadeiro, caso
o número seja negativo, ou falso, caso contrário.
*/
#include <stdio.h>

int isneg(int a){
    return (a < 0) ? 1 : 0;
}

int main(){
    int num;
    printf("Digite um numero: \a");
    scanf("%d",&num);

    switch (isneg(num))
    {
    case 1:
        printf("%d e negativo\n", num);
        break;

    case 0:
        printf("%d e positivo\n",num);
        break;
    
    default:
        break;
    }
    system("pause");
    return 0;
}