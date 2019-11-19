#include <stdio.h>

int main () {

	int i;
	int eingegebeneZahl;
    int falscheEingabe;

	printf("Programm zur Primzahlausgabe nach dem Prinzip: ""Sieb des Eratosthenes""\n");

	do {
		printf("Bitte geben sie eine Zahl von 2 - 1000 ein:  "); 
		scanf("%i", &eingegebeneZahl);
        falscheEingabe = (eingegebeneZahl < 2 || eingegebeneZahl > 1000); 
		if (falscheEingabe) {
			printf("Fehler! Bitte Eingabebedingungen beachten!\n");
		}
	} while (falscheEingabe);
	return 0;
}	

