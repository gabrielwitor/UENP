/*
Faça um programa que leia uma matriz 3 X 7 com valores inteiros, calcule e mostre quantos
elementos dessa matriz estão no intervalo entre 10 e 50, desconsiderando os extremos. Em
seguida, gere uma segunda matriz com os elementos diferentes de 10 e 50, completando a
matriz com zero no lugar desses números.
*/

#include <stdio.h>

#define TAML 3
#define TAMC 7

int main(){
    int matriz[TAML][TAMC], matriznova[TAML][TAMC];

    for (int i = 0; i < TAML; i++){
        for (int j = 0; j < TAMC; j++){
            printf("Digite o elemento de posicao [%d %d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("Elementos da matriz que sao maiores que 10 e menores que 50: ");
    for (int i = 0; i < TAML; i++){
        for (int j = 0; j < TAMC; j++){
            if (matriz[i][j] > 10 && matriz[i][j] < 50){
                printf("%d; ",matriz[i][j]);
            }
        }
    }

    for (int i = 0; i < TAML; i++){
        for (int j = 0; j < TAMC; j++){
            if (matriz[i][j] == 10 || matriz[i][j] == 50){
                matriznova[i][j] = 0;
            } else {
                matriznova[i][j] = matriz[i][j];
            }

        }
    }

    printf("\nNova matriz: \n");
    for (int i = 0; i < TAML; i++){
        for (int j = 0; j < TAMC; j++){
            printf("%d   ",matriznova[i][j]);
        }
        printf("\n");
    }

    return 0;
}