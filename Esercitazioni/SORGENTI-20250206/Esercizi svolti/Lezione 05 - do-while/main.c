/*
simuli un semplice gioco in cui l'utente deve indovinare un numero segreto
il programma genera un numero segreto casuale tra 1 e 100
l'utente ha un numero illimitato di tentativi per indovinare il numero.
dopo ogni tentativo, il programma deve fornire un suggerimento: se il numero inserito è troppo alto, il programma deve stampare: "Troppo alto! Riprova."; se il numero inserito è troppo basso, il programma deve stampare: "Troppo basso! Riprova."
se l'utente indovina, il programma stampa: "Complimenti! Hai indovinato il numero in [X] tentativi." (dove [X] è il numero di tentativi effettuati).
il programma termina solo quando l'utente indovina il numero.
usare il ciclo do while per gestire i tentativi
utilizzare la funzione rand() per generare il numero segreto casualmente
gestire i tentativi con una variabile contatore
verificare che l'input sia valido (solo numeri interi positivi)
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    // inizializzazione dei numeri casuali
    srand(time(NULL));

    // generazione del numero casuale
    int numeroSegreto = rand() % 100 + 1;
    int numeroInserito = 0;
    int contatoreTentativi = 0;

    // ciclo per gestire il tentativi
    do
    {
        printf("Inserisci un numero: ");
        int ret = scanf("%d", &numeroInserito);

        if (ret == 1 && numeroInserito >= 1 && numeroInserito <= 100)
        {
            printf("Tentativo: %d\n", ++contatoreTentativi);


            if (numeroInserito < numeroSegreto)
            {
                printf("Il numero inserito e' troppo piccolo\n");
            }
            else if (numeroInserito > numeroSegreto)
            {
                printf("Il numero inserito e' troppo grande\n");
            }
            else
            {
                printf("Il numero inserito e' esattamente uguale al numero segreto\n");
                printf("Complimenti hai indovinato in %d tentativi\n", contatoreTentativi);
            }
        }
        else 
        {
            // valore inserito non corretto
            printf("Valore inserito non valido\n");
        }
        fseek(stdin, 0, SEEK_END);

    } while (numeroInserito != numeroSegreto);

    return 0;
}