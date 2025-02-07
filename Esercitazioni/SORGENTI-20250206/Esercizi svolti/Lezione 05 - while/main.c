/* 
chieda all'utente di inserire una sequenza di numeri interi positivi; il programma deve calcolare la somma dei numeri,
il massimo numero inserito e la lunghezza della sequenza
l'input termina quando l'utente inserisce il numero 0 (lo zero non deve essere incluso nei calcoli)
se l'utente inserisce un numero negativo, il programma deve ignorarlo e chiedere un altro numero.
dopo che l'utente termina la sequenza, il programma deve stampare: la somma totale dei numeri,
il numero massimo inserito, la lunghezza della sequenza (escludendo i numeri negativi e lo zero)
se l'utente non inserisce alcun numero valido prima di inserire 0,
il programma deve stampare un messaggio adeguato, ad esempio: "Nessun numero valido inserito"
utilizzare il ciclo while
*/

#include <stdio.h>

int main() {

    int num = 0, sum = 0, max = 0, len = 0;

    // richiesta di inserimento da parte dell'utente
    printf("Inserisci un numero positivo (0 per terminare il programma): ");
    scanf("%d", &num);

    while ( num != 0 )
    {
        // controllo che il numero sia positivo
        if ( num > 0 )
        {
            // calcolo della somma
            sum += num;

            // determinazione del numero massimo
            if ( num > max ) {
                max = num;
            }

            // memorizzazione del contatore dei numeri inseriti
            len++;
        }   
        else {
            // messaggio di errore per segnalare che l'input non e' corretto
            printf("Il numero inserito non e' positivo\n");
            printf("Inserisci un nuovo numero\n");
        }

        // richiesta di inserimento da parte dell'utente
        printf("Inserisci un numero positivo (0 per terminare il programma): ");
        scanf("%d", &num);

    }

    // controllo se sono stati inseriti dei numeri
    if ( len > 0 ) {
        // stampa delle informazioni raccolte
        printf("\nInformazioni raccolte:\n");
        printf("Somma totale: %d\n", sum);
        printf("Massimo: %d\n", max);
        printf("Contatore numeri inseriti: %d\n", len);
    }
    else {
        // stampa che non e' stato inserito nessun numero
        printf("\nNessun dato da visualizzare\n");
    }

    return 0;
}