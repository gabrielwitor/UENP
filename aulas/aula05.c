/*
Aula do dia 16/08/2023

Matrizes usando arrays
*/

#include <stdio.h>

int main(){
    int taml, tamc;

    printf("Digite a quantidade de alunos: ");
    scanf("%d",&taml);

    printf("Digite a quantidade de notas: ");
    scanf("%d",&tamc);

    tamc += 1;

    float matriz[taml][tamc];

    for(int i = 0; i < taml; i++){
        for(int j = 0; j < tamc; j++){
            if(j==0){
                printf("Digite o indice do aluno: ");
                scanf("%f",&matriz[i][j]);
            }else{
                printf("Digite a nota %d do aluno de indice %.0f: ",j,matriz[i][0]);
                scanf("%f",&matriz[i][j]);
            }
        }
    }

    for(int i = 0; i < taml; i++){
        float media = 0;
        for (int j = 1; j < tamc; j++){
            media += matriz[i][j];
        }
        printf("A media do aluno %.0f e %.2f.\n",matriz[i][0],(float)media/(tamc-1));
    }

    return 0;
}