/*
Implemente uma função que receba como parâmetro dois vetores vetX e vetY de tamanho n.
A funçao deve retornar o ponteiro para um vetor soma de tamanho n alocado dinamicamente,
em que soma = vetX + vetY.
*/

#include <stdio.h>
#include <stdlib.h> // Biblioteca necessária para alocação dinâmica

int *soma(int *vetX, int *vetY, int n){
    int *p;

    p = (int *) malloc(n * sizeof(int));

    if(p == NULL){
        printf("Erro: memoria insuficiente.");
        exit(1);
    }

    for(int i = 0; i < n; i++){
        p[i] = vetX[i] + vetY[i];
    }

    return p;

}

int main(){
    int n;

    printf("Digite o tamanho no vetor: ");
    scanf("%d",&n);

    int vetX[n], vetY[n], *p;

    for(int i = 0; i < n; i++){
        printf("Digite o elemento [%d] do vetor X: ",i);
        scanf("%d",&vetX[i]);
        printf("Digite o elemento [%d] do vetor Y: ",i);
        scanf("%d",&vetY[i]);
    }

    p = soma(vetX,vetY,n);

    printf("\nVetor soma:\n");

    for(int i = 0; i < n; i++)
        printf("Posição [%d]: %d\n",i,p[i]);
    
    free(p);
    
    return 0;
}
