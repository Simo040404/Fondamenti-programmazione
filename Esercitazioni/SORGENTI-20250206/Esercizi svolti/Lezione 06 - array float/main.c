/* 
Definisca questa matrice 3x4 di numeri in virgola mobile (float) e la inizializzi staticamente nel codice:
 
  1.5  −6.8   10.0
 −3.2   7.1  −11.3
  4.0  −8.4   12.6
  5.5   9.9  −13.7

Calcoli e stampi:
    La somma di tutti i numeri positivi presenti nella matrice.
    La somma di tutti i numeri negativi presenti nella matrice.
    Il valore massimo e il valore minimo della matrice.
    Il numero di elementi pari e il numero di elementi dispari (considerando solo la parte intera del numero).
    Stampi un messaggio se tutti i numeri nella matrice sono positivi o tutti negativi.
    Stampi un messaggio se almeno un numero è multiplo di 5 (considerando solo la parte intera del numero).
*/

#include <stdio.h>
#include <float.h>
#include <stdbool.h>

#include "define.h"
#include "operation.h"

int main() {

/*    float matrix[ROWS][COLS] = 
    {   
        {1.5 , -6.8 ,  10.0},
        {-3.2 ,  7.1 , -11.3},
        {4.0 , -8.4 ,  12.6},
        {5.5 ,  9.9 , -13.7}
    };
*/
    float matrix[ROWS][COLS] = 
    {   
        {1.5 , 6.8 ,  10.0},
        {3.2 ,  7.1 , 11.3},
        {4.0 , 8.4 ,  12.6},
        {5.5 ,  9.9 , 13.7}
    };

    // La somma di tutti i numeri positivi presenti nella matrice
    float sumPos = SumPositiveNumber(matrix);

    printf("\n\n=== SOMMA VALORI POSITIVI ===\n\n");
    printf("somma: %.2f", sumPos);

    // La somma di tutti i numeri negativi presenti nella matrice
    float sumNeg = SumNegativeNumber(matrix, ROWS, COLS);

    printf("\n\n=== SOMMA VALORI NEGATIVI ===\n\n");
    printf("somma: %.2f", sumNeg);

    // Il valore massimo della matrice
    float max = FLT_MIN_EXP;
    for (int i = 0 ; i < ROWS; i++) {
        for (int j = 0; j < COLS; ++j) {
            float f = matrix[i][j];
            if ( max < f )
            {
                // ho trovato un nuovo massimo
                max = f;
            }
        }
    }

    printf("\n\n=== VALORE MASSIMO ===\n\n");
    printf("MAX: %.2f", max);

    // Il valore minimo della matrice
    float min = FLT_MAX;
    for (int i = 0 ; i < ROWS; i++) {
        for (int j = 0; j < COLS; ++j) {
            float f = matrix[i][j];
            if ( min > f )
            {
                // ho trovato un nuovo massimo
                min = f;
            }
        }
    }

    printf("\n\n=== VALORE MINIMO ===\n\n");
    printf("MIN: %.2f",min);

    // Il numero di elementi pari e il numero di elementi dispari (considerando solo la parte intera del numero)
    int countEven = 0;
    for (int i = 0 ; i < ROWS; i++) {
        for (int j = 0; j < COLS; ++j) {
            int f = matrix[i][j];
            bool isEven = (( f % 2 ) == 0);
            if ( isEven )
            {
                // ho trovato nu numero pari
                countEven++;
            }
        }
    }

    printf("\n\n=== QUANTI SONO I NUMERI PARI ===\n\n");
    printf("COUNTER: %d", countEven);

    printf("\n\n=== QUANTI SONO I NUMERI DISPARI ===\n\n");
    printf("COUNTER: %d", ((ROWS*COLS) - countEven));

    // Stampi un messaggio se tutti i numeri nella matrice sono positivi
    bool allPos = true;
    for (int i = 0 ; i < ROWS; i++) {
        for (int j = 0; j < COLS; ++j) {
            float f = matrix[i][j];
            if ( f < 0 )
            {
                // ho trovato un numero negativo
                allPos = false;
                break;
            }
        }
    }

    if ( allPos ) {
        printf("\n\n=== TUTTI I NUMERI SONO POSITIVI ===\n\n");
    }

    // Stampi un messaggio se tutti i numeri nella matrice sono tutti negativi
    bool allNeg = true;
    for (int i = 0 ; i < ROWS; i++) {
        for (int j = 0; j < COLS; ++j) {
            float f = matrix[i][j];
            if ( f >= 0 )
            {
                // ho trovato un numero positivo
                allNeg = false;
                break;
            }
        }
    }

    if ( allNeg ) {
        printf("\n\n=== TUTTI I NUMERI SONO NEGATIVI ===\n\n");
    }

    printf("\n\n");

    return 0;
}