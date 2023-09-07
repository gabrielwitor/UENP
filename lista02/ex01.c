/*
Faça um programa que receba como entrada um caractere e informe se ele é uma vogal ou não
*/

#include <stdio.h>
#include <ctype.h>

int main(){

    char caractere;

    printf("Digite um caractere: ");
    scanf("%c",&caractere);

    caractere = tolower(caractere);

    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u'){
        printf("%c e uma vogal.",caractere);
    } else{
        printf("%c nao e uma vogal.",caractere);
    }

    return 0;
}