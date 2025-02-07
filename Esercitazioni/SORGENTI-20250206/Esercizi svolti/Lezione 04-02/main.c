/*
Gestisca le spese mensili per elettricità, acqua, gas e internet.
Usi una macro per calcolare una penale del 10% per ritardi nei pagamenti.
Usi direttive come #ifdef e #ifndef per: abilitare o disabilitare
  il calcolo della penale in base a una configurazione.
Permettere il debug del programma stampando informazioni aggiuntive.
Determini se la spesa totale supera una soglia predefinita e stampi un messaggio con if-else.
Offra suggerimenti di risparmio utilizzando uno switch.
Stampi un riepilogo finale con tutte le informazioni.
*/

#include <stdio.h>

#include "define.h"



int main()
{
	printf("Inserimento delle spese mensili\n");
	float elt;
	printf("Elettricita': ");
	scanf("%f", &elt);
	float acq;
	printf("Acqua: ");
	scanf("%f", &acq);
	float gas;
	printf("Gas: ");
	scanf("%f", &gas);
	float web;
	printf("Web: ");
	scanf("%f", &web);

	float tot = elt + acq + gas + web;

	printf("Totale spesa %f\n", tot);

	if (tot < SOGLIA_MASSIMA_SPESA)
	{
		printf("La spesa mensile e' sotto controllo\n");
	}
	else
	{
		printf("La spesa mensile e' fuori controllo!!!\n");
	}

	DEBUG_PRINT("Calcolo della penale");

#ifdef ABILITA_CALC_PENALE
	float penale = 0;
	char ritardo[2];
	printf("Il pagamento e' in ritardo [s/n]: ");
	scanf("%1s", ritardo);
	if (!strcmp(ritardo, "s"))
	{
		// pagamento in ritardo
		printf("Attenzione: la spesa mensile e' stata pagata in ritardo\n");
		penale = CALC_PENALE(tot);
		printf("Penale: %.2f\n", penale);
	}
	else
	{
		// pagamento entro la data di scadenza
		printf("La spesa mensile e' stata pagata entro la scadneza\n");
	}
#endif // ABILITA_CALC_PENALE

	// suggerimento per il risparmio
	int scelta_corretta = 1;
	do {
		printf("Quale spesa vuoi ottimizzare?\n");
		printf("1. Elettricita'\n2. Acqua\n3. Gas\n4. Internet\n");
		int scelta = 0;
		scanf("%d", &scelta);
		scelta_corretta = 1;
		switch (scelta) {
		case 1:
			printf("Suggerimento: utilizza elettrodomestici a basso consumo\n");
			break;
		case 2:
			printf("Suggerimento: ripara eventuali perdite d'acqua\n");
			break;
		case 3:
			printf("Suggerimento: isola meglio la finestre della tua casa\n");
			break;
		case 4:
			printf("Suggerimento: valuta un provider piu' economico\n");
			break;
		default:
			scelta_corretta = 0;
			printf("Scelta non valida\n");
		}

	} while (scelta_corretta == 0);

	printf("\nProgramma terminato!!!\n");

	return 0;

}
