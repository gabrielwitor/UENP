#include <stdio.h>


void escrevemat(int l, int c, int matriz[l][c]);
void multmatriz(int l, int c, int matriz[l][c]);
void lematriz(int l, int c, int matriz[l][c]);

int main(){
    int l, c;
    printf("Digite o tamanho da matriz: ");
    scanf("%d%d",&l,&c);
    int matriz[l][c];

    escrevemat(l,c,matriz);
    multmatriz(l,c,matriz);
    lematriz(l,c,matriz);



    return 0;
}

void escrevemat(int l, int c, int matriz[l][c]){
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf("Digite o elemento de pos [%d %d]: ",l,c);
            scanf("%d",&matriz[l][c]);
        }
    }
}

void multmatriz(int l, int c, int matriz[l][c]){
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            matriz[l][c] += 1;
        }
    }
}

void lematriz(int l, int c, int matriz[l][c]){
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf("%d   ",matriz[i][j]);
        }
        printf("\n");
    }
}