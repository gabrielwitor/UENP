#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[50], hangedman[6] = "O|/\\/\\", playerhangedman[6] = "      ", letter, attempts[26];
    int stage = 0, belongs, count = 0, verify;

    printf("Digite a palavra secreta: ");
    fgets(word, sizeof(word), stdin);

    char secret[strlen(word)];
    strcpy(secret, word);
    for (int i = 0; i < (int)strlen(secret); i++) {
        if (secret[i] != ' ' && secret[i] != '\n') {
            secret[i] = '_';
        }
    }

    while (stage < 6) {
        belongs = 0, verify = 0;

        if(stage>=1){
            playerhangedman[stage-1] = hangedman[stage-1];
        }

        printf(
            "\n________\n"
            "|      |\n"
            "|      %c\n"
            "|     %c%c%c %s"
            "|     %c %c\n"
            "|_______",
            playerhangedman[0], playerhangedman[2], playerhangedman[1], playerhangedman[3],
            secret, playerhangedman[4], playerhangedman[5]
        );

        printf("\nTentativas: ");

        for (int i = 0; i < count; i++) {
            printf(" %c", attempts[i]);
        }

        printf("\nDigite a tentativa: ");
        letter = getchar();
        letter = tolower(letter);

        while (getchar() != '\n');  // Limpa o buffer do teclado

        for (int i = 0; i < count; i++) {
            if (letter == attempts[i]) {
                printf("\nVoce ja tentou essa letra.");
                verify = 1;
                break;
            }
        }

         if (verify) {
            continue;
        }

        for (int i = 0; i < (int)strlen(secret); i++) {
            if (letter == tolower(word[i])) {
                secret[i] = word[i];
                belongs = 1;
            }
        }

        if (belongs == 0) {
            printf("A letra %c nao pertence a palavra. ", letter);
            attempts[count] = letter;
            count++;
            stage++;
        } else {
            attempts[count] = letter;
            count++;
        }

        if (strcmp(word, secret) == 0) {
            printf("\nGanhou!\nA palavra era: %s", word);
            return 0;
        }

    }

    printf("\n\nVoce perdeu.\nA palavra era: %s", word);

    return 0;
}