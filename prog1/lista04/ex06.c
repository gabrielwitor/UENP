/*
Implemente uma função que receba como parâmetro o peso (em quilos) e a altura (metros)
de uma pessoa, calcule e retorne o seu IMC (Índice de Massa Corporal), cujo cálculo ́e dado
por: IMC = peso/(altura * altura). Implemente outra função que receba como parâmetro
o IMC de uma pessoa e a classifique de acordo com a Tabela 1.

Condição          IMC em Adultos
Abaixo do peso    < 18,5
Peso normal       18,5 ≤ IMC ≤ 24,9
Sobrepeso         25 ≤ IMC ≤ 29,9
Obeso             ≥ 30
*/

#include <stdio.h>

float imccalc(float weight, float height){
    return weight/(height*height);
}

float imcverify(float imc){
    if (imc < 18.5) {
        printf("IMC de %.1f. Abaixo do peso.",imc);
    } else if(18.5 <= imc && imc <= 24.9){
        printf("IMC de %.1f. Peso normal.",imc);
    } else if(25 <= imc && imc <= 29.9){
        printf("IMC de %.1f. Sobrepeso.",imc);
    } else{
    printf("IMC de %.1f. Obeso.",imc);
    }
    return 0;
}

int main(){
    float height, weight;
    printf("Calculo de IMC\nDigite seu peso (em quilos) e sua altura (em metros): ");
    scanf("%f%f",&weight,&height);

    imcverify(imccalc(weight,height));
    return 0;
}