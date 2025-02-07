/*Chieda all'utente di inserire il proprio nome e cognome.
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

 int main (){

    char nome[64]= "";
    char cognome[64] = "";

    printf("Inserisci il nome: ");
    scanf("%s", nome);

    printf("Inserisci il cognome: ");
    scanf("%s", cognome);

    printf("Output del Programma:");

    printf("\n\n");
    printf("Benvenuto %s %s ", nome, cognome);
    printf("Grazie per aver usato il nostro programma. ");
    printf("Ti auguriamo Buone Feste\n   *\n  ***\n *****\n*******\n  ***");
    printf("\n\n");

    return 0;
 }