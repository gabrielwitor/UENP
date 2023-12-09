/*
Considere a seguinte declaração: int a,*b,**c,***d. Escreva um programa
que leia a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse
valor utilizando apenas os ponteiros b, c e d. O ponteiro b deve ser usado
para calcular o dobro, c, o triplo, e d, o quádruplo.
*/

#include <stdio.h>

int main(){
    int x, *b = &x, **c = &b, ***d = &c;

    printf("Digite um valor x: ");
    scanf("%d",**d);

    printf("x: %d\n",x);
    printf("O dobro de x: %d\n",*b * 2);
    printf("O triplo de x: %d\n",**c * 3);
    printf("O quadruplo de x: %d\n",***d * 4);
    return 0;
}