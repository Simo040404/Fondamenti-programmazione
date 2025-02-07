// libreria per lo standard input/output
#include <stdio.h>

// include con le macro delle operazioni matematiche
#include "operation.h"

#include "operation.h"

int main()
{
    PRINT_NAME_SURNAME;

    // lettura del primo numero intero
    int num1;
    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);

    // lettura del secondo numero intero
    int num2;
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    // somma
    int sum = MY_SUM(num1, num2);
    printf("Somma di %d e %d = %d\n", num1, num2, sum);

    // sottrazione
    int sub = MY_SUB(num1, num2);
    printf("Sottrazione di %d e %d = %d\n", num1, num2, sub);

    // moltiplicazione
    int mul = MY_MUL(num1, num2);
    printf("Moltiplicazione di %d e %d = %d\n", num1, num2, mul);

    // divisione, visualizza zolo due cifre dopo la virgola
    double div = MY_DIV(num1, num2);
    printf("Divisione di %d e %d = %.2lf\n", num1, num2, div);

    // modulo
    int mod = MY_MOD(num1, num2);
    printf("Modulo di %d e %d = %d\n", num1, num2, mod);

    // calcolo complesso
    double compl = MY_DIV(num2, MY_SUB(MY_MUL(MY_SUM(num1, num2), MY_MOD(num1, num2)), num2)); 
    printf("Calcolo complesso: %d / (((%d + %d) * (%d %% %d)) - %d) = %lf\n", num2, num1, num2, num1, num2, num2, compl);

    // fine programma
    printf("Programma terminato");

    return 0;
}