/*
Faça uma função que receba um caractere e verifique se ele é uma vogal ou não.
*/

#include <stdio.h>
#include <ctype.h>

void isitvowel(char letter){
    printf("'%c'",letter);
    letter = tolower(letter);
    (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') 
    ? printf(" e vogal\n") : printf(" nao e vogal\n");
}

int main(){
    char letter;
    printf("Digite uma letra: ");
    scanf("%c",&letter);
    isitvowel(letter);
    return 0;
}