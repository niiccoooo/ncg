#include <stdio.h>

int main () {

	printf("Programm zur Primzahlausgabe nach dem Prinzip: ""Sieb des Eratosthenes""\n");

	int i;;
	int eingegebeneZahl;
	
	
	for (i = 0; i < 1; i++){
		printf("Bitte geben sie eine Zahl von 2 - 1000 ein:  "); 
		scanf("%i", &eingegebeneZahl);
			if ( eingegebeneZahl < 2 || eingegebeneZahl > 1000){
			printf("Fehler! Bitte Eingabebedingungen beachten!\n");
			i--;
			}
	}
	return 0;
}	

