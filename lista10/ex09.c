/*
Implemente um programa que leia uma string alocada dinamicamente e inverta seu conteúdo.
Por exemplo, se a string for "alocacao dinamica em c" entao devera ser impresso "c me
acimanid oacacola".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int tam;
    char * frase, * frase_invertida;
    
    printf("Digite o tamanho da frase: ");
    scanf("%d",&tam);

    tam += 2; // +2 pois existe o \0 e o \n

    frase = (char *) malloc ((tam) * sizeof(char));
    frase_invertida = (char *) malloc ((tam) * sizeof(char)); 

    setbuf(stdin,NULL);
    printf("Digite a frase: ");
    fgets(frase,tam,stdin);

    int indiceFinalFrase;

    for(int i = 0; i < tam; i++)
        if(frase[i] == '\0'){
            indiceFinalFrase = i;
            break;
        }
    
    for(int i = 0; i < tam; i++){
        frase_invertida[i] = frase[indiceFinalFrase-2-i];
    }

    printf("Frase: %s\n",frase_invertida);

    return 0;
}