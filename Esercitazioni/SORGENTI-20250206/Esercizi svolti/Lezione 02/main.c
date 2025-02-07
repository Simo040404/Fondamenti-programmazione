/* Stampi un messaggio introduttivo con il proprio nome e cognome
  Chieda all'utente di inserire la categoria e il peso in kg. del dispositivo
  elettronico da riciclare Stampi un messaggio che indichi qual è il peso in kg.
  che è possibile riciclare e qual è il peso del materiale da buttare Le
  percentuali da utilizzare per calcolare i vari pesi sono le seguenti R1, 85%
  di materiale recuperabile R2, 75% di materiale recuperabile R3, 65% di
  materiale recuperabile R4, 50% di materiale recuperabile R5, 40% di materiale
  recuperabile */

// libreria per lo standard input/output
#include <stdio.h>
// libreria per le stringhe
#include <string.h>
// libreria che contiene le costanti per conoscere i valori
// massimi e minimi di un double e di un float
#include <float.h>

// contiene tutte le define delle macro usate da questo programma
#include "define.h"

// funzione main
int main() {

  // stampa del nome e cognome
  PRINT_NAME_SURNAME;

  // lettura da tastiera della categoria
  char categoria[3];
  printf("Inserisci la categoria: ");
  scanf("%2s", categoria);

  // lettura da tastiera del peso
  double peso;
  printf("Inserisci il peso: ");
  scanf("%lf", &peso);

  printf("\n\n");

  // variabile per memorizzare la percentuale di riciclo da usare per i calcoli
  double perPesoRiciclabile;

  // STAMPE DI INFORMAZIONI SUI FLOAT E DOUBLE
  // STAMPE DI INFORMAZIONI SUI FLOAT E DOUBLE
  // STAMPE DI INFORMAZIONI SUI FLOAT E DOUBLE

  /*
  stampa la dimensione in byte del tipo float e del double
  printf("%ld %ld\n", sizeof(ftPesoRiciclabile), sizeof(dbPesoRiciclabile)); */

  /*
  stampa il massimo per un float e per un double
  printf("massimo: %lf %lf\n", FLT_MAX, DBL_MAX); */

  /*
  stampa il minimo per un float e per un double
  printf("minimo: %lf %lf\n", FLT_MIN, DBL_MIN);*/

  // stampa i dati inseriti dall'utente
  // %.2lf serve per visualizzare il numero reale con due cifre dopo la virgola
  printf("Dati inseriti %s %.2lf\n", categoria, peso);

  // strcmp confronta due stringhe e restituisce 0 se sono uguali
  if (strcmp(categoria, "R1") == 0) {
    perPesoRiciclabile = PERC_R1;
  } else if (strcmp(categoria, "R2") == 0) {
    perPesoRiciclabile = PERC_R2;
  } else if (strcmp(categoria, "R3") == 0) {
    perPesoRiciclabile = PERC_R3;
  } else if (strcmp(categoria, "R4") == 0) {
    perPesoRiciclabile = PERC_R4;
  } else if (strcmp(categoria, "R5") == 0) {
    perPesoRiciclabile = PERC_R5;
  } else {
    // la categoria inserita dall'utente non e' valida
    printf("Categoria non valida\n");
    // terminazione del programma con errore
    return 1;
  }

  // controllo se il peso e' maggiore, uguale a 0
  if (peso <= 0) {
    printf("Peso non valido\n");
    // terminazione del programma con errore
    return 1;
  }

  // calcolo del peso riciclabile
  double recuperabile = peso * perPesoRiciclabile;
  // calcolo del peso irrecuperabile
  double irrecuperabile = peso - recuperabile;

  // stampa di quanto calcolato
  printf("Peso riciclabile: %.2lf\n", recuperabile);
  printf("Peso irrecuperabile: %.2lf\n", irrecuperabile);

  // programma terminato correttamente
  return 0;
}