#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "functions.h"
#include "functions.c"

int main() {
    char words[][20] = {"elephant", "banana", "computer", "galaxy", "puzzle", "giraffe"};
    int num_words = sizeof(words) / sizeof(words[0]);

    srand(time(NULL));

    // Seleziona una parola casuale
    char chosen_word[20];
    select_random_word(words, num_words, chosen_word);

    // Crea la parola nascosta con '*'
    char hidden_word[20];
    initialize_hidden_word(chosen_word, hidden_word);

    int attempts = 0;
    char guess;
    
    printf("La parola da indovinare: %s\n", hidden_word);

    while (strcmp(chosen_word, hidden_word) != 0) {
        printf("\nInserisci un carattere: ");
        scanf(" %c", &guess);

        if (check_letter(chosen_word, hidden_word, guess)) {
            printf("Lettera presente!\n");
        } else {
            printf("Lettera assente!\n");
        }

        attempts++;
        printf("Parola attuale: %s\n", hidden_word);
    }

    printf("\n Complimenti! Hai indovinato la parola \"%s\" in %d tentativi! \n\n\n\n", chosen_word, attempts);
    return 0;
}