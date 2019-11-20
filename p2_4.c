#include <stdio.h>


void swap(int *x, int *y) {

	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort (int array[], int n) {

	int i, j;
	for (i = 0; i < n-1; i++) {

        for (j = 0; j < n-1; j++) {
            if (array[j] > array[j+1]) {
            swap (&array[j], &array[j+1]);
            }
		}
	}
}

void printArray (int array[], int size) {

	int i;

	for (i = 0; i < size; i++) {
		printf("%i", array[i]);
		printf("\t");
	}
}

int main (){

	int i;
	const int zahlengroesse = 6;
	int zahlenfolge[zahlengroesse];
   	int n = sizeof(zahlenfolge)/sizeof(zahlenfolge[0]);

	for (i = 0; i < zahlengroesse; i++) {
		printf("Bitte geben Sie Zahl %i ein\n", i+1);
		scanf("%i", &zahlenfolge[i]);
	}
	printf("Ungeordnetes Arrray:\n");
	printArray(zahlenfolge, n);
	printf("\n\nGeordnetes Array:\n");
	bubbleSort(zahlenfolge, n);
	printArray(zahlenfolge, n);
	printf("\n");
	return 0;
}
