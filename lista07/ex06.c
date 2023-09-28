/*
Faça um programa que leia uma string e um caractere qualquer e, em seguida, implemente
uma função que contabilize e retorne o total de ocorrências desse caractere na string.
*/

#include <stdio.h>
#include <ctype.h>

#define MAXSIZE 50

int charOccurenceCounter(char *string, char character){
    int count = 0;
    for(int i = 0; i < MAXSIZE; i++){
        if (string[i] == '\n'){
            break;
        } else {
            if (tolower(string[i]) == tolower(character)){
                count++;
            }
        }
    }
    return count;
}
    
int main(){ 
    char string[MAXSIZE], character;
    int count;

    printf("Digite uma frase: ");
    fgets(string,MAXSIZE,stdin);

    printf("Digite um caractere: ");
    scanf("%c",&character);

    printf("Total de ocorrencias de [%c]: %d",character,charOccurenceCounter(string,character));

    return 0;
}