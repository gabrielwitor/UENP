/*
Faça um programa para criptografar uma string qualquer informada pelo usuário, substituindo
as vogais encontradas na string pelo caractere especial asterisco (*).
*/

#include <stdio.h>
#include <ctype.h>
#define MAXSIZE 50

int isItVowel(char *string, int i);

int main(){
    char string[MAXSIZE];

    printf("Digite uma frase: ");
    fgets(string,MAXSIZE,stdin);

    for (int i = 0; string[i] != '\0'; i++){
        if (isItVowel(string,i))
            string[i] = '*';
    }

    printf("%s",string);

    return 0;
}

int isItVowel(char *string, int index){
    char vowels[6] = "aeiou";

    for(int i = 0; i < 6; i++)
        if (tolower(string[index]) == vowels[i])
            return 1;

    return 0;
}