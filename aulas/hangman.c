#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char word[50], hangedman[6] = "O|/\\/\\", playerhangedman [6] = "      ", letter, attempts[26];
    int stage = 0, belongs, count = 0, verify;

    printf("Digite a palavra secreta: ");
    fgets(word, 50, stdin);

    char secret[strlen(word)];
    strcpy(secret, word);
    for (int i = 0; i < (int) strlen(secret); i++){
        if (secret[i] != ' ' && secret[i] != '\n'){
            secret[i] = '_';
        }
    }
        
    while (stage < 6) {
        belongs = 0, verify = 0;

        switch (stage)
        {
        case 1:
            playerhangedman[0] = hangedman[0];
            break;
        case 2:
            playerhangedman[1] = hangedman[1];
            break;
        case 3:
            playerhangedman[2] = hangedman[2];
            break;
        case 4:
            playerhangedman[3] = hangedman[3];
            break;
        case 5:
            playerhangedman[4] = hangedman[4];
            break;
         case 6:
            playerhangedman[5] = hangedman[5];
            break;
        default:
            break;
        }        
        printf(
            "\n________\n"
            "|      |\n"
            "|      %c\n"
            "|     %c%c%c %s"
            "|     %c %c\n"
            "|_______", 
            playerhangedman[0],playerhangedman[2],playerhangedman[1],playerhangedman[3],
            secret, playerhangedman[4],playerhangedman[5]
        );

        printf("\nTentativas: ");

        for (int i = 0; i < count; i++){
            printf(" %c",attempts[i]);
        }

        printf("\nDigite a tentativa: ");
        letter = getchar();
        letter = tolower(letter);

        for(int i = 0; i < 26; i++){
            if (letter == attempts[i]){
                printf("\nVoce ja tentou essa letra.");
                getchar(); // Limpa buffer do teclado.
                verify = 1;
                continue;
            }
        }

        if (verify == 1){
            continue;
        }

        for (int i = 0; i < (int) strlen(secret); i++){
            if (letter == tolower(word[i])){
                secret[i] = word[i];
                belongs = 1;
            }
        }

        if (belongs == 0){
            printf("A letra %c nao pertence a palavra. ",letter);
            attempts[count] = letter;
            count++;
            stage++;
        } else {
            attempts[count] = letter;
            count++;
        }

        if (strcmp(word, secret) == 0){
            printf("\nGanhou!\nA palavra era: %s",word);
            return 0;
        }

        getchar(); // Limpa buffer do teclado.
    };

    printf("\n\nVoce perdeu.\nA palavra era: %s",word);

    return 0;
}