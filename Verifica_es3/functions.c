#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

// Seleziona una parola casuale dall'array
void select_random_word(char words[][20], int num_words, char *chosen_word) {
    int index = rand() % num_words;  // Seleziona un indice casuale
    strcpy(chosen_word, words[index]);
}

// Inizializza la parola nascosta con '*'
void initialize_hidden_word(const char *chosen_word, char *hidden_word) {
    int length = strlen(chosen_word);
    for (int i = 0; i < length; i++) {
        hidden_word[i] = '*';
    }
    hidden_word[length] = '\0';
}

// Controlla se una lettera è presente nella parola e aggiorna la parola nascosta
int check_letter(const char *chosen_word, char *hidden_word, char guess) {
    int found = 0;
    for (int i = 0; chosen_word[i] != '\0'; i++) {
        if (chosen_word[i] == guess) {
            hidden_word[i] = guess;
            found = 1;
        }
    }
    return found;
}
