/*
Faça uma função que receba um caractere e verifique se ele é uma vogal ou não.
*/

#include <stdio.h>

void isitvowel(char letter){
    (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') ? printf("\"%c\" e vogal", letter) : printf("\"%c\" nao e vogal",letter);
}

int main(){
    char letter;
    printf("Digite uma letra: ");
    scanf("%c",&letter);
    isitvowel(letter);
    return 0;
}