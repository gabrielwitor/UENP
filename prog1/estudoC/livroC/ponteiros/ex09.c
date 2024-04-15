/*
Crie uma função que receba como parâmetro um vetor e o imprima. Não
utilize índices para percorrer o vetor, apenas aritmética de ponteiros.
*/

#include <stdio.h>

void imprimir(char *p){
    for(int i = 0; i < 14; i++)
        printf("%c",*(p+i));
}

int main(){
    char vetor[14] = "Gabriel Witor";

    imprimir(vetor);

    return 0;
}