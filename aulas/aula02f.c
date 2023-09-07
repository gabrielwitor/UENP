/*
Aula do dia 03/05/2023
*/

#include <stdio.h>

int main(){

    float x,y;
    char op;

    printf("Digite um numero, um operador e outro numero: ");
    scanf("%f%c%f", &x, &op, &y);

    switch(op) {
        case '+':
            printf("%.1f + %.1f = %.1f",x,y,x+y);
            break;
        case '-':
            printf("%.1f - %.1f = %.1f",x,y,x-y);
            break;
        case '*':
            printf("%.1f - %.1f = %.1f",x,y,x*y);
            break;
        case '/':
            printf("%.1f - %.1f = %.1f",x,y,x/y);
            break;
        default:
            printf("Operador desconhecido.");

    }

    return 0;
}