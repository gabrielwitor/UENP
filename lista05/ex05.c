/*
Faça um programa em leia uma sequência de números e armazene em um vetor. Em
seguida, determine e mostre quantos números lidos estão dentro do intervalo entre 10 e 50.
O programa deve ser encerrado quando for lido o número -1.
*/

#include <stdio.h>

int main(){
  int tamanho, contador = 0;

  printf("Digite a quantidade de elementos: ");
  scanf("%d",&tamanho);

  int vetor[tamanho];

  for (int i = 0; i < tamanho; i++){
    printf("Digite o elemento de index [%d]: [-1] para encerrar o programa. ",i);
    scanf("%d",&vetor[i]);
    if (vetor[i] == -1){
      return 0; //encerra o programa
    }
  }

  for (int i = 0; i < tamanho; i++){
    contador = (vetor[i] >= 10 && vetor[i] <= 50) ? contador + 1 : contador;
  }
  
  printf("%d elementos desse vetor de tamanho %d estao no intervalo de 10 a 50.",contador, tamanho);
  return 0;
}