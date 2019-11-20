#include <stdio.h>
#include <stdbool.h>

int main () {

	int i;
	int j;
	int eingegebeneZahl;
    int falscheEingabe;
    bool markiert[1000] = {0};

	printf("Programm zur Primzahlausgabe nach dem Prinzip: ""Sieb des Eratosthenes""\n");

	do {
		printf("Bitte geben sie eine Zahl von 2 - 1000 ein:  ");
		scanf("%i", &eingegebeneZahl);
        falscheEingabe = (eingegebeneZahl < 2 || eingegebeneZahl > 1000);
		if (falscheEingabe) {
			printf("Fehler! Bitte Eingabebedingungen beachten!\n");
		}
	} while (falscheEingabe);

	for(i = 2; i <= eingegebeneZahl; i++) {
        if (!markiert[i-2]) {
               for (j = 2 * i; j <= eingegebeneZahl; j += i) {
                    markiert[j-2] = true;
               }
        }
	}
    int primzahlen[1000];
	int counter = 0;

	for (i = 2; i <= eingegebeneZahl; i++) {
        if (!markiert[i-2]) {
        primzahlen[counter] = i;
        counter++;
        }
	}

    printf("\n");
	printf("In der Zahl %i gibt es %i Primzahlen\n", eingegebeneZahl, counter);
	printf("Die Primzahlen der Zahl %i sind:\n", eingegebeneZahl);
	for (i = 0; i <= eingegebeneZahl; i++) {
        if (markiert[i] = 1) {
            printf("%i, ", primzahlen[i]);
        }
	}
	printf("\n");
	return 0;
}

