#include <stdio.h>

int main (){

	const int gaugenzahl = 6;
	const int gwuerfe = 5;
	int augenzahl[gaugenzahl];
	int wuerfe[gwuerfe];	
	
	for (int i = 0; i < gwuerfe; i++){
		printf("Bitte %i-te Augenanzahl eingeben:\n", i+1);
		scanf("%i", &wuerfe[i]);
		if (wuerfe[i] > 6 || wuerfe[i] < 1) {
    		printf("Bitte erneut eingeben");
	    	i--;
		}
	}
	printf("Es wurde gewuerfelt:");

	printf("\n Wurf 1 | Wurf 2 | Wurf 3 | Wurf 4 | Wurf 5\n"); 	
	for (int i = 0; i < gwuerfe; i++){
	       	printf("      %i\t", wuerfe[i]);
	}

	for (int i = 0; i < gaugenzahl; i++) {
		augenzahl[i] = 0;
	}

    printf("\n");
	for (int i = 0; i < gwuerfe; i++) {
		augenzahl[wuerfe[i]-1]++;
	}

	for (int i = 0; i < gaugenzahl; i++) {
		if (augenzahl[i] == 5) {
		    printf("\nGewonnen! Grand!\n");
		    return 0;
		} else if ( augenzahl[i] == 4) {
			printf("\nGewonnen! Poker!\n");
			return 0;			
		} else if ( augenzahl[i] == 2) {
            		for ( int j = 0;j < gaugenzahl; j++) {
              		  if ( augenzahl[j] == 3) {
				printf("\nGewonnen! Full House!\n");
                   	  	return 0;
			  }
            		}
	    }	
    }

	printf(" Leider nichts gewonnen!\n");	
	return 0;
}
