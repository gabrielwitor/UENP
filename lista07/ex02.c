/*
Faça um programa para criptografar uma string qualquer informada pelo usuário, substituindo
cada letra da string pela letra do alfabeto em sua respectiva posição, mas de trás para frente.
Por exemplo, se a string digitada for adoro programar em c a saída deve ser zwlil kiltiznzi
vn x.
*/

#include <stdio.h>
#include <string.h>

#define MAXSIZE 50

int main(){
    char phrase[MAXSIZE], cryptophrase[MAXSIZE], alphabet[27] = "abcdefghijklmnopqrstuvwxyz", invertedalphabet[27]; 

    printf("Digite a frase a ser criptografada: ");
    fgets(phrase,MAXSIZE,stdin);

    strcpy(invertedalphabet,alphabet);
    strrev(invertedalphabet);

    strcpy(cryptophrase, phrase);
    
    for (int i = 0; i < MAXSIZE; i++){
        for (int j = 0; j < 27; j++){
            if (phrase[i] == alphabet[j]){
                cryptophrase[i] = invertedalphabet[j];
            }
        }
    }

    printf("Frase criptografada: %s",cryptophrase);

    return 0;
}