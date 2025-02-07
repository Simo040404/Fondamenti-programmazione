#include <stdio.h>
#include "functions.h"

// Somma
int add(int a, int b) {
    return a + b;
}

// Sottrazione
int sub(int a, int b) {
    return a - b;
}

// Moltiplicazione
int mul(int a, int b) {
    return a * b;
}

// Divisione (gestisce la divisione per zero)
float divi(int a, int b) {
    if (b == 0) {
        return 0.0;  // Caso gestito nel main con un messaggio di errore
    }
    return (float)a / b;
}

// Modulo (gestisce il modulo per zero)
int mod(int a, int b) {
    if (b == 0) {
        return 0;  // Caso gestito nel main con un messaggio di errore
    }
    return a % b;
}

// Potenza (implementata con moltiplicazione iterativa)
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Test su un array di numeri
void test_all_operations(int arr[], int size) {
    printf("\nTest delle operazioni sui numeri {2, 4, 6, 8, 10}:\n");

    for (int i = 0; i < size - 1; i++) {
        int a = arr[i];
        int b = arr[i + 1];

        printf("%d + %d = %d\n", a, b, add(a, b));
        printf("%d - %d = %d\n", a, b, sub(a, b));
        printf("%d * %d = %d\n", a, b, mul(a, b));

        if (b != 0) {
            printf("%d / %d = %.2f\n", a, b, divi(a, b));
            printf("%d %% %d = %d\n", a, b, mod(a, b));
        } else {
            printf("%d / %d = Errore (divisione per zero)\n", a, b);
            printf("%d %% %d = Errore (modulo per zero)\n", a, b);
        }

        printf("%d ^ 2 = %d\n", b, power(b, 2));  // Eleva il secondo numero al quadrato
        printf("\n");
    }
}
