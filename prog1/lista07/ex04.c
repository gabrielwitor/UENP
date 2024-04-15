/*
Faça um programa que leia duas strings quaisquer e mostre se as duas são iguais ou
diferentes no conteúdo e se possuem o mesmo tamanho. Lembre-se que as strings podem
conter letras maiúsculas e/ou minúsculas.
*/

#include <stdio.h>
#include <ctype.h>

#define MAXSIZE 50

int sizecounter(char string[MAXSIZE]){
    int count = 0;
    for(int i = 0; i < MAXSIZE; i++){
        if (string[i] == '\n'){
            break;
        }
        count++;
    }
    return count;
}

int main(){
    char stringA[MAXSIZE], stringB[MAXSIZE];

    printf("Digite a string A: ");
    fgets(stringA, MAXSIZE, stdin);

    printf("Digite a string B: ");
    fgets(stringB, MAXSIZE, stdin);

    if (sizecounter(stringA) == sizecounter(stringB)){
        printf("As frases tem mesmo tamanho.");
        for (int i = 0; i < sizecounter(stringA); i++){
            if (tolower(stringA[i]) != tolower(stringB[i])){
                printf("\nAs frases possuem conteudos diferentes.");
                return 0;
            }
        }

        printf("\nAs frases possuem conteudos iguais.");

    } else {
        printf("As frases possuem tamanhos distintos.\nAs frases possuem conteudos diferentes.");
    }

    return 0;
}