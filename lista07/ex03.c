/*
Faça um programa que leia uma string informada pelo usuário e, em seguida, implemente
uma função que contabilize a quantidade de espaços em branco existente na string lida.
*/

#include <stdio.h>

#define MAXSIZE 50

int countspaces(char string[MAXSIZE]){
    int count = 0;
    for (int i = 0; i < MAXSIZE; i++){
        if (string[i] == ' '){
            count++;
        }
    }
    return count;
}

int main(){
    
    int spaceCount;
    char string[MAXSIZE];

    printf("Digite uma frase: ");
    fgets(string, MAXSIZE, stdin);

    spaceCount = countspaces(string);

    printf("Numero de espacos na frase: %d",spaceCount);

    return 0;
}