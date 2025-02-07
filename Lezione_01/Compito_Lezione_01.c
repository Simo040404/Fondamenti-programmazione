/* Scrivere un programma in C che:

Chieda all'utente di inserire il proprio nome e cognome.
Stampi un messaggio di benvenuto personalizzato.
Visto che siamo ormai a Natale, visualizzare un messaggio di auguri.
Specifiche del Programma

Usare #include <stdio.h> per l'input e l'output.
La funzione main() deve includere:
Dichiarazione di variabili per il nome, il cognome.
Utilizzo di printf per stampare i messaggi e scanf per leggere i dati.
Utilizzo di \n per organizzare l'output su più righe.
Esempio di Output Atteso

Input Utente:

Inserisci il tuo nome: Mario  
Inserisci il tuo cognome: Rossi  
Output del Programma:

Benvenuto, Mario Rossi!  
Grazie per aver usato il nostro programma.  
Ti auguriamo Buone Feste
   *
  ***
 *****
*******
  ***

*/

#include <stdio.h>

int main(){

// dichiarazione variabili
  char name[32];
  char surname[32];

  printf("Input Utente:\n\n");

// richiesta nome
  printf("Inserire il proprio nome: ");

// scannerizzazione del nome
  scanf("%s", name);

// richiesta cognome
  printf("Inserire il proprio cognome: ");

// scannerizzazione del cognome
  scanf("%s", surname);

  printf("Output del programma:\n\n");
  printf("Benvenuto, %s %s!", name, surname);
  printf("\nGrazie per aver usato il nostro programma.\n");
  printf("Ti auguriamo Buone Feste\n");

// albero di natale
  printf("   *\n  ***\n *****\n*******\n  ***\n\n\n\n");

  

  return 0;
}