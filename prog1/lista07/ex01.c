/*
Faça um programa que inverta uma string lida. Por exemplo, se a string digitada for
programar em linguagem C, o resultado deve ser C megaugnil me ramargorp.
*/

// Há a opção de realizar esse exercício usando a função strrev(), entretanto quis implementar minha
// própria maneira de inverter a string.

#include <stdio.h>
#include <string.h>

#define MAXSIZE 50

int main(){
    char phrase[MAXSIZE], invertedphrase[MAXSIZE];
    int count = 0, position; // count -> variavel utilizada para preencher string inverttida

    printf("Digite a frase: ");
    fgets(phrase,MAXSIZE,stdin);

    strcpy(invertedphrase,phrase); //posição do /n e do /0 permanecem a mesma.

    for (int i = 0; i < MAXSIZE; i++){
        if(phrase[i] == '\0'){
            position = i;
            break;
        }
    }

    for(int i = position-2; i >= 0; i--){ //(-2) desconsidera o \n e o \0. Assim, preencho a string somente com os caracteres invertidos.
        invertedphrase[count] = phrase[i];
        count++;
    }

    printf("Frase invertida: %s",invertedphrase);

    return 0;
}