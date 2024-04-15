/*
Faça um programa que leia uma matriz de 5 strings e imprima cada uma delas. Depois,
peça para o usuário digitar mais uma string e verifique se ela está na matriz, caso esteja
indique em que linha ela se encontra. (SEM USAR STRING.H)
*/

#include <stdio.h>

#define MAXL 5
#define MAXC 100

int stringMatrixEnd(char strings[MAXL][MAXC], int line){
    for(int column = 0; column < MAXC; column++){
        if(strings[line][column] == '\0'){
            return column;
            break;
        }
    }
}


int stringEnd(char *string){
    for(int i = 0; i < MAXC; i++)
        if(string[i] == '\0'){
            return i;
            break;
        }
}

int main(){
    char strings[MAXL][MAXC], userString[MAXC];
    int equals;

    for(int line = 0; line < MAXL; line++){
        printf("Digite a string da linha %d: ",line);
        fgets(strings[line],MAXC,stdin);
    }

    printf("Digite uma string: ");
    fgets(userString, MAXC, stdin);

    for(int line = 0; line < MAXL; line++){
        equals = 0;

        if(stringMatrixEnd(strings, line) == stringEnd(userString)){
            equals = 1;
            for(int column = 0; column < stringEnd(userString); column++){
                if(strings[line][column] != userString[column]){
                    equals = 0;
                    break;
                }
            }
        }
        if(equals)
            printf("\nA frase esta presente na string na linha %d",line);
    }

    return 0;
}