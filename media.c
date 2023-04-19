#include <stdio.h>

int main(){
    float nota1, nota2, media;

    printf("Digite as 2 notas:\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;
    
    printf("Media das duas notas: %.1f", media);

    if (media >= 4 && media < 7){
        printf("\nExame!");
    }
    else if (media >= 7){
        printf("\nPassou!");
    }
    else{
        printf("\nReprovou!");
    }
    return 0;
}
