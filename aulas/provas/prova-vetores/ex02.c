/*
Dada a matriz 5 x 5 representada na Figura 1, implemente funções para realizar as seguintes tarefas:

a) Somar os elementos de cada coluna separadamente e colocar o resultado em um vetor.

b) Verificar se um determinado elemento passado como parâmetro está presente na matriz. 

c) Calcular a média dos elementos da área assinalada em cinza na matriz.

=====================
|   |   | X |   | X |
=====================
| X | X | X | X | X |
=====================
|   |   | X |   | X |
=====================
| X | X | X | X | X |
=====================
|   |   | X |   | X |
=====================

*/

#include <stdio.h>

#define MAXSIZE 5

void sumColumnsIntoArray(int matrix[MAXSIZE][MAXSIZE], int *array);
int verifyElementPresence(int matrix[MAXSIZE][MAXSIZE], int element);
float averageOfSignedMatrixElements(int matrix[MAXSIZE][MAXSIZE]);


int main(){
    int matrix[MAXSIZE][MAXSIZE], sumArray[MAXSIZE] = {0,0,0,0,0};

    for(int i = 0; i < MAXSIZE; i++){
        for(int j = 0; j < MAXSIZE; j++){
            printf("Digite o numero de indice [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    sumColumnsIntoArray(matrix,sumArray);
    for(int i = 0; i < MAXSIZE; i++){
        printf("Soma da coluna de indice [%d]: %d\n",i,sumArray[i]);
    }

    int element;
    printf("Digite um numero inteiro. Verificarei se ele esta presente na matriz: ");
    scanf("%d",&element);
    if(verifyElementPresence(matrix, element)){
        printf("O numero [%d] esta presente na matriz.",element);
    } else printf("O numero [%d] nao esta presente na matriz.",element);

    printf("\nMedia dos elementos assinalados na matriz: %.2f",averageOfSignedMatrixElements(matrix));

    return 0;
}

void sumColumnsIntoArray(int matrix[MAXSIZE][MAXSIZE], int *array){
    for(int column = 0; column < MAXSIZE; column++){
        for(int line = 0; line < MAXSIZE; line++){
            array[column] += matrix[line][column];
        }
    }
}

int verifyElementPresence(int matrix[MAXSIZE][MAXSIZE], int element){
    for(int i = 0; i < MAXSIZE; i++)
        for(int j = 0; j < MAXSIZE; j++)
            if(matrix[i][j] == element)
                return 1;
        
    return 0; // por padrão, retorna 0 (não está presente na matrix)
}

float averageOfSignedMatrixElements(int matrix[MAXSIZE][MAXSIZE]){
    int sum = 0;
    for(int column = 0; column < MAXSIZE; column++){ // Somando segunda e quarta linha
        sum += matrix[1][column] + matrix[3][column];
    }

    for(int line = 0; line < MAXSIZE; line += 2){ // Somando o resto dos valores que faltavam (2 valores na primeira, terceira e quinta coluna)
        sum += matrix[line][2] + matrix[line][4];
    }

    return ((float)sum/16);
}