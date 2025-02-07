/* Legga da tastiera il giorno della settimana (come stringa) e la spesa effettuata in quel giorno.
Usi una macro per calcolare l'IVA (22%) sulla spesa.
Usi una struttura di controllo if-else per distinguere i giorni feriali da quelli festivi.
Stampi il totale delle spese con e senza IVA, specificando se il giorno è feriale o festivo.*/

#include <stdio.h>

int main()
{
    char nome[64] = "";
    char cognome[64] = "";

    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);

    printf("Inserisci il tuo cognome: ");
    scanf("%s", cognome);

    printf("\n\n");
    printf("%s%s", nome, cognome);
    printf("\n\n");
    

    return 0;
}