/*
Faça um programa que receba uma string de no máximo 255 
caracteres e, em seguida, implemente funções que:

a) Receba como parâmetro a string, calcula e retorna o total de palavras contidas na string.

b) Receba como parâmetro a string e imprime a última palavra da string.

c) Receba como parâmetro a string, calcula e retorna a porcentagem de vogais em relação ao
total de caracteres na string.

d) Receba como parâmetro a string e dois valores representando duas posições na string, mostre
a substring (caracteres) contida entre os dois valores informados pelo usuário.

e) Receba como parâmetro a string e o valor de deslocamento 'n' 
e retorna a string criptografada. Nesta criptografia, 
basta substituir cada caractere da string por um caractere deslocado 'n' posições no alfabeto, 
onde 'n' é um número inteiro fornecido pelo usuário. 
Por exemplo, se string = "'programa em c'' en = 5, 
então string criptografada "'uwtlwfrf jr h''.

Obs.: Não usar a biblioteca <string.h>
*/

#include <stdio.h>
#include <ctype.h>

#define MAXSIZE 255
#define VOWELS "aeiou"
#define ALPHABET "abcdefghijklmnopqrstuvwxyz"

int totalSpacesAmount(char *string);
void printLastWord(char *string);
float percantageOfVogals(char *string);
void printStringSpan(char *string, int start, int end);
void printEncryptedString(char *string, int displacement);

int main(){
    char string[MAXSIZE];

    printf("Digite uma frase: ");
    fgets(string,MAXSIZE,stdin);

    printf("\nQuantidade de palavras na string: %d",totalSpacesAmount(string));

    printf("\nUltima palavra na string: ");
    printLastWord(string);

    printf("Porcentagem de vogais em relação ao total de letras: %.2f%%",percantageOfVogals(string));

    int start, end;

    printf("\nDigite o inicio e o fim do intervalo da string que sera impresso: ");
    scanf("%d%d",&start,&end);
    printStringSpan(string,start,end);

    int displacement;

    printf("\nDigite o deslocamento da criptografia de cesar: (valor inteiro) ");
    scanf("%d",&displacement);
    printEncryptedString(string, displacement);

    return 0;
}

int totalSpacesAmount(char *string){
    int amountOfSpaces = 0;

    for(int i = 0; string[i] != '\0'; i++){
        if (string[i] == ' ')
            amountOfSpaces++;
    }

    return amountOfSpaces+1; //a quantidade de palavras é sempre a quantidade de espaços + 1
}

void printLastWord(char *string){
    int lastSpacePos = 0; // a posição do último espaço é inicializado em 0, pois dessa forma caso não há nenhum espaço (a string ser composta de uma única palavra), é impresso a única palavra da string.

    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == ' ')
            lastSpacePos = i;
    }

    for(int i = lastSpacePos; string[i] != '\0'; i++){
        printf("%c",string[i]);
    }
}

float percantageOfVogals(char *string){
    int letterCounter = 0;
    int vowelCounter = 0;

    for(int i = 0; string[i] != '\0'; i++){
        for(int j = 0; VOWELS[j] != '\0'; j++){
            if(tolower(VOWELS[j]) == tolower(string[i]))
                vowelCounter++;
        }
        for(int k = 0; ALPHABET[k] != '\0'; k++){
            if(tolower(ALPHABET[k]) == tolower(string[i]))
                letterCounter++;
        }
    }

    return (((float)vowelCounter/letterCounter)*100);
}

void printStringSpan(char *string, int start, int end){
    for (int i = start; i <= end; i++)
        printf("%c",string[i]);
}

void printEncryptedString(char *string, int displacement){
    for(int i = 0; string[i] != '\0'; i++){
        if (string[i] == ' ')
            printf(" ");
        for(int j = 0; ALPHABET[j] != '\0' ; j++){
            if(ALPHABET[j] == string[i])
                printf("%c",ALPHABET[j+displacement]);
        }
    }
}