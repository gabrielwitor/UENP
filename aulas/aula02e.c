/*
Aula do dia 03/05/2023
*/

#include <stdio.h>

int main(){

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%i",&num);

    if (num >= 0){
        if (num % 2 == 0){
            printf("%i e positivo e par",num);
        } 
        else{
            printf("%i e positivo e impar",num);
        }
    } 
    else{
        if (num % 2 == 0){
            printf("%i e negativo e par",num);
        } else{
            printf("%i e negativo e impar",num);
        }
    }
    
    return 0;
}