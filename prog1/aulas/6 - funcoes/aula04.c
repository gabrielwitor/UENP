/*
Aula do dia 05/07/2023

Declaração de funções em C
*/

#include <stdio.h>

int sum(int a, int b) {return a+b;}

int sub(int a, int b) {return a-b;}

int mul(int a, int b) {return a*b;}

int div(int a, int b) {return a/b;}

int menu(){
    int op;

    do{
        printf("[0] -> Soma (+)\n");  
        printf("[1] -> Soma (-)\n");  
        printf("[2] -> Soma (*)\n");  
        printf("[3] -> Soma (/)\n");
        printf("Digite o operador que deseja: ");
        scanf("%d",&op);

    } while(op != 0 && op != 1 && op != 2 && op != 3);

    return op;
}

int main(){
    int x,y;
    int op;
    printf("Digite dois valores: ");
    scanf("%d%d",&x,&y);

    op = menu();

    switch (op)
    {
    case 0:
        printf("%d + %d = %d",x,y,sum(x,y));
        break;
    case 1:
        printf("%d - %d = %d",x,y,sub(x,y));
        break;
    case 2:
        printf("%d * %d = %d",x,y,mul(x,y));
        break;
    case 3:
        printf("%d / %d = %d",x,y,div(x,y));
        break;
    default:
        break;
    }

    return 0;
}