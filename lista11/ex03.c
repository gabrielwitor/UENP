/*
Implemente uma função recursiva responsável por converte um número n na base decimal
para binária.
*/

#include <stdio.h>

int imprimirDigitoBinario(int posicao, int * vetor, int n){
    vetor[posicao] = n%2;

    if (n == 0)
        return 0;

    return imprimirDigitoBinario(posicao - 1, vetor, n/2);
}

int main(){
    int vetor[255], decimal;

    for(int i = 0; i < 255; i++)
        vetor[i] = -1;

    printf("Digite um valor: ");
    scanf("%d",&decimal);

    printf("%d em binário: ",decimal);
    
    imprimirDigitoBinario(254,vetor,decimal); // 255 é a posição do fim do vetor.

    for(int i = 0; i < 255; i++)
        if(vetor[i] != -1)
            printf("%d",vetor[i]);

    return 0;
}