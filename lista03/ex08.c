/*
Faça um programa para calcular e gerar a tabuada dos números 1 ao 10.
*/

#include <stdio.h>

int main(){
    
    int i, multiply;

    for (i = 1 ; i <= 10; i++){
        printf("\n\nTabuada do: %d",i);

        for (multiply = 1 ; multiply <= 10; multiply++){
            printf("\n%d * %d = %d",i,multiply,i*multiply);
        }
    }

    return 0;
}