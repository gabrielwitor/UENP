/*
Faça um progrma que leia uma string de tamanho qualquer, em seguida, leia um caractere
e mostre as posições (índices) de onde ocorre o caractere na string. Caso não haja nenhuma
ocorrência do caractere na string, deve ser impresso o valor -1.
*/

#include <stdio.h>

void counter(char character, char *string){
    int counter = 0;
    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == character){
            counter++;
            printf("Caractere %c na posicao: %d\n",character,i);
        }
    }
    if(counter == 0)
        printf("-1");
}

int main(){
    int size;
    printf("Digite o tamanho da frase que voce digitara: ");
    scanf("%d",&size);

    getchar();

    char string[size], character;

    printf("Digite a frase: ");
    fgets(string,size,stdin);

    printf("Digite um caracter:");
    scanf("%c",&character);

    counter(character, string);

    return 0;
}
