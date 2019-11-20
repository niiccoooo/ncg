#include <stdio.h>

int main () {

	int i;
	int j;
	int eingegebeneZahl;
    int falscheEingabe;
    const int arraysize = 999;
    int markiert[arraysize];
    int counter = 0;

	printf("Programm zur Primzahlausgabe nach dem Prinzip: ""Sieb des Eratosthenes""\n");

	do {
		printf("Bitte geben sie eine Zahl von 2 - 1000 ein:  ");
		scanf("%i", &eingegebeneZahl);
        falscheEingabe = (eingegebeneZahl < 2 || eingegebeneZahl > 1000);
		if (falscheEingabe) {
			printf("Fehler! Bitte Eingabebedingungen beachten!\n");
		}
	} while (falscheEingabe);

	for(i = 0; i <= arraysize; i++) {
        if (markiert[i-2]) {
               for (j = 2 * i; j <= arraysize; j += i) {
                    markiert[j-2] == 0;
               }
        }
	}
	for (i = 0; i <= arraysize; i++) {
        if (markiert[i] = 1) {
        counter++;
        }
	}
	printf("In der Zahl %i gibt es %i Primzahlen\n", eingegebeneZahl, counter);
	printf("Die Primzahlen der Zahl %i sind:\n", eingegebeneZahl);
	printf("\n");
	return 0;
}

