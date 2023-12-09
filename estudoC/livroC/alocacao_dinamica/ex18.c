/*
Escreva uma função que receba como parâmetro duas matrizes, A e B, e
seus tamanhos. A função deve retornar o ponteiro para uma matriz C, em
que C é o produto da multiplicação da matriz A pela matriz B. Se a
multiplicação das matrizes não for possível, retorne um ponteiro nulo
*/

//INACABADO!!!

#include <stdio.h>
#include <stdlib.h>

int ** alocaMatriz(int linha, int coluna){
    int ** mat;
    mat = (int **) malloc (linha * sizeof(int *));

    for(int i = 0; i < linha; i++){
        mat[i] = (int *) malloc (coluna * sizeof(int));
    }

    return mat;
}

int ** matrizMultiplicada(int linMat1, int colMat1, int linMat2, int colMat2, int ** mat1, int **  mat2){
    if(linMat1 != colMat2){
        return NULL;
    }

    int ** matMult = alocaMatriz(linMat1, colMat2);

    for(int i = 0; i < linMat1; i++){
        for(int j = 0; j < colMat2; j++){
            matMult[i][j] = 0;
        }
    }

    for(int i = 0; i < colMat1; i++){
        for(int j = 0; j < linMat1; j++){
            matMult[i][j] += mat1[i][j] * mat2[j][i];
        }
    }

    return matMult;
}

int main(){
    int lin = 2, col = 2; 
    int ** mat1 = alocaMatriz(2,2);
    int ** mat2 = alocaMatriz(2,2);

    for(int i = 0; i < lin; i++){
        int aux = 0;
        for(int j = 0; j < col; j++){
            mat1[i][j] = aux;
            mat2[i][j] = aux;
            aux++;
        }
    }

    int ** mat3 = matrizMultiplicada(lin, col, lin, col, mat1, mat2);

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;

}
    