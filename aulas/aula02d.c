/*
Aula do dia 03/05/2023
*/

#include <stdio.h>

int main(){
    float velocidadeVia, velocidadeVeiculo, diferenca;

    float multa = 0;
    int pontos = 0;

    printf("Digite a velocidade da via e a velocidade do veiculo: ");
    scanf("%f%f", &velocidadeVia, &velocidadeVeiculo);
    
    diferenca = velocidadeVeiculo / velocidadeVia; // ultrapassado

    if (diferenca>1){
        if (diferenca <= 1.2){
            multa = 130.16;
            pontos = 4;
        }
        else if(diferenca <= 1.15){
            multa = 195.23;
            pontos = 5; 
        }
        else {
            multa = 880.41;
            pontos = 7;
        }
    
    printf("\nMulta = R$%.2f / Pontos = %i",multa,pontos);

    }
    else{
        printf("Nao levou multa.");
    }

    return 0;
}