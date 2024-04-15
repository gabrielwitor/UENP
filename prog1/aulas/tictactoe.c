#include <stdio.h>

#define SIZE 3

char verify(char game[SIZE][SIZE]){

    if (game[0][0] == game[1][1] && game[1][1] == game [2][2]){ // diagonal principal
        return game[1][1];
    } else if (game[0][2] == game[1][1] && game[1][1] == game [2][0]){ //diagonal secundaria
        return game[1][1];
    } else if (game[0][0] == game[1][0] && game[1][0] == game [2][0]){ //primeira coluna
        return game[1][0];
    } else if (game[0][1] == game[1][1] && game[1][1] == game [2][1]){ //segunda coluna
        return game[1][1];
    } else if (game[0][2] == game[1][2] && game[1][2] == game [2][2]){ //terceira coluna
        return game[1][2];
    } else if (game[0][0] == game[0][1] && game[0][1] == game [0][2]){ //primeira linha
        return game[0][1];
    } else if (game[1][0] == game[1][1] && game[1][1] == game [1][2]){ //segunda linha
        return game[1][1];
    } else if (game[2][0] == game[2][1] && game[2][1] == game [2][2]){ //terceira linha
        return game[2][1];
    }

    return ' ';
}

int main(){

    char game[SIZE][SIZE] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int posl, posc, currentplayer = 0;

    while (1){
        printf(
        "  1   2   3\n"
        "1 %c | %c | %c\n"
        " -----------\n"
        "2 %c | %c | %c\n"
        " -----------\n"
        "3 %c | %c | %c\n"
        ,game[0][0],game[0][1],game[0][2]
        ,game[1][0],game[1][1],game[1][2]
        ,game[2][0],game[2][1],game[2][2]
        );

        if (verify(game) != ' '){
            printf("Acabou! %c venceu!\n",verify(game));
            return 0; 
        }

        if(currentplayer == 9)
            break;

        (currentplayer % 2 == 0) ? printf("Vez do jogador X\n") : printf("Vez do jogador O\n");

        printf("Digite a linha da posicao que deseja preencher: ");
        scanf("%d",&posl);
        printf("Digite a coluna da posicao que deseja preencher: ");
        scanf("%d",&posc);

        if (game[posl-1][posc-1] != ' '){
            printf("\nPosicao preenchida ou invalida\n");
            continue;
        }

        game[posl-1][posc-1] = (currentplayer % 2 == 0) ? 'X' : 'O';

        currentplayer++;
    }

    printf("\nDeu velha! Ninguem venceu.");

    return 0;
}