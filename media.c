#include <stdio.h>

int main(){
    float nota1, nota2, media;
    
    printf("Digite as 2 notas\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;
    
    printf("Media das duas notas: %f", media);

    return 0;
}
