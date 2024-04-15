/*
Faca um programa que leia uma string de no maximo 100 caracteres. Em seguida, implemente
uma função para calcular e mostrar o total de palavras da string lida. Para isso, utilize o
protótipo de função a seguir.
*/

#include <stdio.h>

#define MAXSIZE 100

int totalPalavras (char *str) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
        if(str[i] == ' ')
            count++;
    
    return count+1;
}

int main(){
    char frase[MAXSIZE]; 

    printf("Digite uma frase: ");
    fgets(frase,MAXSIZE,stdin);

    printf("Total de palavras: %d\n",totalPalavras(frase));

    return 0;
}