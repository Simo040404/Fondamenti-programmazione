/*
Legga da tastiera il giorno della settimana (come stringa) e la spesa effettuata in quel giorno.
Usi una macro per calcolare l'IVA (22%) sulla spesa.
Usi una struttura di controllo if-else per distinguere i giorni feriali da quelli festivi.
Stampi il totale delle spese con e senza IVA, specificando se il giorno è feriale o festivo.
*/

#include <stdio.h>
#include <string.h>

#include "define.h"

int main()
{
    printf("Calcolo IVA!\n");

    // lettura del giorno della settimana
    char day[16];
    printf("Inserisci il giorno della settimana [lun,mar,mer,gio,ven,sab,dom]: ");
    scanf("%s", day);

    // lettura delle spese
    float expense;
    printf("Inserisci la spesa effettuata: ");
    scanf("%f", &expense);

    // determinazione del giorno della settimana
    int sat = strcmp(day, "sab");
    int sun = strcmp(day, "dom");
    int mon = strcmp(day, "lun");
    int tue = strcmp(day, "mar");
    int wed = strcmp(day, "mer");
    int thu = strcmp(day, "gio");
    int fri = strcmp(day, "ven");
    if (sat == 0 || sun == 0)
    {
        printf("Giorno festivo\n");
    }
    else if (mon == 0 || tue == 0 || wed == 0 || thu == 0 || fri == 0)
    {
        printf("Giorno feriale\n");
    }
    else
    {
        printf("Giorno non valido\n");
        return 1;
    }

    // controllo delle spese in modo da verificare che siano positive
    if (expense <= 0)
    {
        printf("Spese non valide\n");
        return 1;
    }


    // calcolo dell'IVA
    float expense_iva = CALC_IVA(expense);

    // stampa dei risultati
    printf("Totale delle spese %.2f\n", expense);
    printf("Totale delle spese con IVA %.2f\n", expense_iva);

    return 0;
}
