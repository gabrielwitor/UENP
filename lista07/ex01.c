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

    printf("Digite a frase: ");
    fgets(phrase,MAXSIZE,stdin);

    for (int i = MAXSIZE; i >= 0; i--)
        invertedphrase[MAXSIZE-i] = phrase[i];

    int pos = 0;

    while(1) //encontrando a posição do '/n'. É necessário para imprimir a frase sem memória lixo, pois indica qual posição a frase começa.
        if(invertedphrase[pos] == '\n'){
            break;
        } else pos++;

    printf("\nFrase invertida: ");

    for(int i = pos+1; i <= MAXSIZE;i++){ //imprimindo a partir da posição do '\n'.
        printf("%c",invertedphrase[i]);
    }

    return 0;
}