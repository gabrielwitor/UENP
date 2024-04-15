/*
Faça um programa que receba do usuário um vetor de “n” números reais e ordene-os em
ordem crescente. Ao final, o programa deve mostrar o vetor ordenado.
*/

#include <stdio.h>

int main(){
    int n , aux;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int vetor[n];

    for (int i = 0; i < n; i++){
        printf("Digite o elemento de index [%d]",i);
        scanf("%d",&vetor[i]);
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (vetor[j] >=  vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ",vetor[i]);
    }
    
    return 0;
}