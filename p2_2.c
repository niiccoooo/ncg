#include <stdio.h>

int main () {

	int i = 0, j = 0;
	int eingegebeneZahl = 0;
  	int falscheEingabe;
   	int markiert[1001] = {0};
	int anzahl = 0;
	
	printf("Programm zur Primzahlausgabe nach dem Prinzip: ""Sieb des Eratosthenes""\n");

	do {
		printf("Bitte geben sie eine Zahl von 2 - 1000 ein:  ");
		scanf("%i", &eingegebeneZahl);
        falscheEingabe = (eingegebeneZahl < 2 || eingegebeneZahl > 1000);
		if (falscheEingabe) {
			printf("Fehler! Bitte Eingabebedingungen beachten!\n");
		}
	} while (falscheEingabe);
	
	markiert[1] = 0
	for (i = 2; i <= 1000; i++) {
        	markiert[i] = 1;
	}
	for(i = 2; i <= eingegebeneZahl; i++) {
        	if (markiert[i]) {
              		for (j = 2 * i; j <= eingegebeneZahl; j += i) {
                	    markiert[j] = 0;
               		}
        	}
	}
   	int primzahl[1001];

	for (i = 2; i <= eingegebeneZahl; i++) {
        	if (markiert[i]) {
       			primzahl[anzahl] = i;
        		anzahl++;
       		}
	}
   	printf("\n");
	printf("Bis zur Zahl %i gibt es %i Primzahlen\n", eingegebeneZahl, anzahl);
	printf("Die Primzahlen sind:\n", eingegebeneZahl);
	for (i = 0; i <= anzahl; i++) {
           	printf("|%i ", primzahl[i]);
       		}
	}
	printf("|\n");
	return 0;
}


