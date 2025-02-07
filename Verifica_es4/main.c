#include <stdio.h>
#include <stdbool.h>
#include "functions.h"
#include "functions.c"

int main()
{
    do {
        printf("\n\n=== OPERAZIONI MATEMATICHE ===\n\n");
        printf("1. Addizione (+)\n");
        printf("2. Sottrazione (-)\n");
        printf("3. Moltiplicazione (*)\n");
        printf("4. Divisione (/)\n");
        printf("5. Modulo (%%)\n");
        printf("6. Potenza (^)\n");
        printf("7. Test di tutte le funzioni\n");
        printf("8. Esci\n");
        printf("Scegli un'operazione (1-8): ");

        int op = 0;
        scanf("%d", &op);

        if (op == 8) {
            break;
        }

        bool err = false;
        int res = 0;
        float fres = 0.0;
        bool floatRis = false;

        if (op >= 1 && op <= 6) {
            int op1, op2;
            printf("Inserisci il primo numero: ");
            scanf("%d", &op1);
            printf("Inserisci il secondo numero: ");
            scanf("%d", &op2);

            switch (op) {
                case 1:
                    res = add(op1, op2);
                    break;
                case 2:
                    res = sub(op1, op2);
                    break;
                case 3:
                    res = mul(op1, op2);
                    break;
                case 4:
                    if (op2 == 0) {
                        printf("\nErrore: Divisione per zero!\n");
                        err = true;
                    } else {
                        fres = divi(op1, op2);
                        floatRis = true;
                    }
                    break;
                case 5:
                    if (op2 == 0) {
                        printf("\nErrore: Modulo per zero!\n");
                        err = true;
                    } else {
                        res = mod(op1, op2);
                    }
                    break;
                case 6:
                    res = power(op1, op2);
                    break;
                default:
                    err = true;
                    break;
            }
        } else if (op == 7) {
            int numbers[] = {2, 4, 6, 8, 10};
            int size = sizeof(numbers) / sizeof(numbers[0]);
            test_all_operations(numbers, size);
            continue;
        } else {
            err = true;
        }

        if (err) {
            printf("\nScelta non corretta\n");
        } else {
            if (floatRis) {
                printf("\nRisultato: %.2f\n", fres);
            } else {
                printf("\nRisultato: %d\n", res);
            }
        }

    } while (true);

    printf("\nArrivederci!\n");

    return 0;
}