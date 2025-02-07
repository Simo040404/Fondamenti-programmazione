#ifndef FUNCTIONS_H
#define FUNCTIONS_H

void select_random_word(char words[][20], int num_words, char *chosen_word);
void initialize_hidden_word(const char *chosen_word, char *hidden_word);
int check_letter(const char *chosen_word, char *hidden_word, char guess);

#endif
