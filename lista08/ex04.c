//Reescreva utilizando ponteiros: 
// #include <stdio.h>

// #define MAX 255

// int main (){

//     char str [MAX], caractere;
//     int count = 0;

//     printf("Entre com a string: ");
//     fgets (str, MAX, stdin);
//     printf("Entre com o caractere: ");
//     scanf(" %c", &caractere);

//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] == caractere) {
//             printf("%d\n", i);
//             count++;
//         }
//     }
//         if (count == 0)
//             printf("-1\n");

//     return 0;
// }

#include <stdio.h>

#define MAX 255

int main (){

    char str [MAX], caractere, *ptr = str;
    int count = 0;

    printf("Entre com a string: ");
    fgets (str, MAX, stdin);

    printf("Entre com o caractere: ");
    scanf(" %c", &caractere);

    for (int i = 0; *(ptr+i) != '\0'; i++) {
        if (*(ptr+i) == caractere) {
            printf("Encontrei o caractere [%c] no indice: [%d]\n", caractere,i);
            count++;
        }
    }
    
        if (count == 0)
            printf("-1\n");

    return 0;
}