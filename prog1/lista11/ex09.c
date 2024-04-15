/*
Implemente uma função recursiva que mostre o maior elemento de um array de inteiros. O
protótipo da função recursiva é a seguinte:

int maiorElemento(int *vet, int tam) { ... }
*/

#include <stdio.h>

int maiorElemento(int *vet, int tam){
    int maior;

    if(tam == 1)
        return vet[0];
    
    maior = maiorElemento(vet, tam-1); 
    if (maior < vet[tam-1]) 
        maior = vet[tam-1];

    return maior;
}

int main(){
    int tam;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);

    int vetor[tam];

    for(int i = 0; i < tam; i++){
        printf("Digite o elemento [%d]: ",i);
        scanf("%d",(vetor+i));
    }

    printf("\nMaior elemento do vetor: %d\n",maiorElemento(vetor,tam));

    return 0;
}