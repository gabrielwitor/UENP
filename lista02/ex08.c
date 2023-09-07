/*
Faça um programa que receba dois números “x” e “y” e execute as operações especificadas
na Tabela 3, de acordo com a opção escolhida pelo usuário. Caso a opção escolhida seja
inválida, o programa deve mostrar uma mensagem de erro e finalizar sua execução. Lembre-se
de que na divisão “y“ deve ser diferente de zero.

Opções Operações
1      Média aritmética entre x e y
2      Diferença do maior pelo menor número
3      Produto entre x e y
4      Divisão entre x e y
*/

#include <stdio.h>

int main(){

    int opcao;
    float x, y;

    printf("================================================\n");
    printf("| Opcao |               Operacao               |\n");
    printf("================================================\n");
    printf("| [ 1 ] | Media aritmetica entre x e y         |\n");
    printf("| [ 2 ] | Diferenca do maior pelo menor numero |\n");
    printf("| [ 3 ] | Produto entre x e y                  |\n");
    printf("| [ 4 ] | Divisao entre x e y                  |\n");
    printf("================================================\n");

    printf("Digite os valores de x e y: ");
    scanf("%f%f",&x,&y);

    printf("Digite a opcao: ");
    scanf("%i",&opcao);

    switch (opcao) {

        case 1:
        printf("\nMedia aritmetica entre x e y: %.1f",(x+y)/2);
        break;

        case 2:

        if (x > y){
            printf("Diferenca entre o maior e o menor numero e: %.1f",x-y);
        } else {
            printf("Diferenca entre o maior e o menor numero e: %.1f",y-x);
        }
        break;

        case 3:
        printf("Produto entre x e y: %.1f",x*y);
        break;

        case 4:
        if (y != 0){
            printf("Divisao entre x e y: %1f",x/y);
        }
        else{
            printf("Erro! y = 0! Encerrando programa.");
        }
        break;

        default:
        printf("Erro! Opcao invalida! Encerrando programa.");
        break;
    }

    return 0;
}