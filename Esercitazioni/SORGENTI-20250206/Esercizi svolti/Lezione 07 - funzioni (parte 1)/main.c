/*
    chieda all'utente due numeri interi e un'operazione da eseguire (+, -, *, /); il programma deve definire e usare quattro funzioni separate per ciascuna operazione matematica:
    int add(int, int) → somma due numeri
    int sub(int, int) → sottrae due numeri
    int mul(int, int) → moltiplica due numeri
    float divi(int, int) → divide due numeri (gestendo il caso di divisione per zero)
    dopo aver preso in input i numeri e l'operazione, il programma deve chiamare la funzione corrispondente e stampare il risultato

    il programma deve essere organizzato per scrivere il codice relativo alle funzioni su file separati dal main 
    il programma deve presentare un menù iniziale con le seguenti opzioni (da visualizzare più volte per ripetere le operazioni):

    1. Addizione (+)
    2. Sottrazione (-)
    3. Moltiplicazione (*)
    4. Divisione (/)
    5. Esci
    Scegli un'operazione (1-5):

 */

#include <stdio.h>
#include <stdbool.h>

#include "operation.h"
#include "operation.c"

int main()
{
    do {
        printf("\n\n=== OPERAZIONI MATEMATICHE ===\n\n");

        printf("1. Addizione (+)\n");
        printf("2. Sottrazione (-)\n");
        printf("3. Moltiplicazione (*)\n");
        printf("4. Divisione (/)\n");
        printf("5. Esci\n");
        printf("Scegli un'operazione (1-5): ");
        int op = 0;
        scanf("%d", &op);
        if ( op == 5 )
        {
            break;
        }

        bool err = false;
        int res = 0;
        float fres = 0.0;
        bool floatRis = false;
        if ( op >= 1 && op <= 4 )
        {
            int op1, op2;
            printf("Inserisci il primo numero: ");
            scanf("%d", &op1);
            printf("Inserisci il secondo numero: ");
            scanf("%d", &op2);

            switch (op)
            {
            case 1:
                res = addi(op1,op2);
                break;
            
            case 2:
                res = subi(op1,op2);
                break;
            
            case 3:
                res = muli(op1,op2);
                break;
            
            case 4:
                fres = divi(op1,op2);
                floatRis = true;
                break;
            
            default:
                err = true;
                break;
            }
        }
        else
        {
            err = true;
        }

        if ( err )
        {
            printf("\nScelta non corretta\n");
        }
        else
        {
            if ( floatRis )
            {
                printf("\nRisultato: %f", fres);
            }
            else
            {
                printf("\nRisultato: %d", res);
            }
        }
    }
    while (true);

    printf("\n\n");

    return;   
}