#include <stdio.h>

int main (){

	int i;
	const int notengroesse = 5;
	int noten[notengroesse];
	float durchschnittsnote, durchfallquote;
	int anzahlNoten;

	printf("Programm Notenspiegel");

	for ( i = 0; i < notengroesse; i++){
		printf("Bitte geben Sie die Anzahl der Arbeiten mit der Note %i ein:  \n", i+1);
		scanf("%i", &noten[i]);
	}
	
	anzahlNoten = noten[0] + noten[1] + noten[2] + noten[3] + noten[4];

	printf("| Note   | 1     | 2     | 3     | 4     | 5     | Gesamt |\n| Anzahl |");

	for ( i = 0; i < notengroesse; i++){
			printf(" %i    | ", noten[i]);
	}
	printf(" %i    |", anzahlNoten);

	durchschnittsnote = (noten[0] * 1 + noten[1] * 2 + noten[2] * 3 + noten[3] * 4 + noten[4] * 5 ) / anzahlNoten;
	durchfallquote = noten[4] * 100 / anzahlNoten;

	printf("\n\nDurchschnittsnote: %.2f", durchschnittsnote);
	printf("\nDurchfallquote: %.2f %%", durchfallquote);
	return 0;
}
