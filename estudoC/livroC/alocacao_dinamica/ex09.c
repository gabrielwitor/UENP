/*
Crie uma função que receba uma string e retorne o ponteiro para essa
string invertida.
*/

#include <stdio.h>
#include <stdlib.h>

char * inversorString(char * string, int tamanho){
    int fim;
    for(int i = 0; i < tamanho; i++){
        if(*(string+i) == '\0'){
            fim = i;
            break;
        }
            
    }

    char stringInvertida[fim];

    stringInvertida[fim] = '\0';

    for(int i = fim-1, aux = 0; i >= 0; i--, aux++){
        stringInvertida[aux] = string[i];
    }

    char * ponteiro = stringInvertida;

    return ponteiro;
}

int main(){
    int tamanho;
    printf("Digite o tamanho da string: ");
    scanf("%d",&tamanho);

    tamanho += 2;

    char string[tamanho];

    setbuf(stdin,NULL);

    printf("Digite o a string: ");
    fgets(string,tamanho,stdin);

    printf("String invertida: %s",inversorString(string,tamanho));

    return 0;
}