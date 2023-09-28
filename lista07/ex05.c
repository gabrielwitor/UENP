/*
Faça um programa que leia uma string e, em seguida, implemente uma função que contabiliza
a quantidade de vogais contidas na string. Lembre-se que as vogais podem estar em
maiúsculas e/ou minúsculas.
*/

#include <stdio.h>
#include <ctype.h>

#define MAXSIZE 50

int countvogals(char *string, char *vogals){
    int count = 0;
    for (int i = 0; i < MAXSIZE; i++){
        
        if (string[i] == '\n')
            break; 

        for (int j = 0; j < sizeof(vogals); j++){
            if (string[i] == vogals[j]){
                count++;
                break;
            }
        }
    }
    return count;
}

int main(){
    char string[MAXSIZE], vogals[6]="aeiou";
    int vogalscount;

    printf("Digite a frase: ");
    fgets(string, MAXSIZE, stdin);

    printf("%d",countvogals(string, vogals));

    return 0;
}