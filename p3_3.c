#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARTICLE_LENGTH 30
#define MAX_ENTRIES 50

typedef struct {
	char articleName[MAX_ARTICLE_LENGTH+1];
	int amount;
} Entry;

Entry stocklist[MAX_ENTRIES];

void addArticle() {

	int i, j;
	int amount;
	char articleName[MAX_ARTICLE_LENGTH];

	for(i = 0; i < 2; i++) {
		printf("Please enter the name of the article: ");
		fflush(stdin);
		scanf("%s", articleName);
		printf("\n");
		printf("\nPlease enter the amount: ");
		fflush(stdin);
		scanf("%i", &amount);
		for(j = 0; j < MAX_ENTRIES; j++) {
			if(strcmp(stocklist[j].articleName, articleName) == 0) {
				stocklist[j].amount = stocklist[j].amount + amount;
				printf("Article added!\n");
				break;

			}else if (stocklist[j].articleName[0] == '\0') {
				strcpy(stocklist[j].articleName, articleName);
				stocklist[j].amount = amount;
				printf("Article added!\n");
				break;
			}
		}
	}
	if(j == MAX_ENTRIES) {
		printf("stocklist is already on its capacity!");
	}
	
	
}

void removeArticle() {

	int i, j;
	int amount;
	char articleName[MAX_ARTICLE_LENGTH];

	for(i = 0; i < 2; i++) {
		printf("Please enter the name of the article: ");
		fflush(stdin);
		scanf("%s", articleName);
		printf("\n");
		printf("\nPlease enter the amount: ");
		fflush(stdin);
		scanf("%i", &amount);
		for(j = 0; j < MAX_ENTRIES; j++) {
			if(strcmp(stocklist[j].articleName, articleName) == 0) {
				stocklist[i].amount = stocklist[j].amount - amount;
				if(stocklist[j].amount < 0) {
					printf("Error! Article amount can't be below 0!\n");
					break;
				}
			printf("Article removed!\n");
			break;
			}
		}
	}
	if(j == MAX_ENTRIES) {		
		printf("Error! Article couldn't be found!\n");
	}
}
		
void searchEntry() {

	int i, j;
	char articleName[MAX_ARTICLE_LENGTH];

	for(i = 0; i < 2; i++) {
		printf("Please enter the name of the article: ");
		fflush(stdin);
		scanf("%s", articleName);
		for(j = 0; j < MAX_ENTRIES; j++) {
			if(strcmp(stocklist[j].articleName, articleName) == 0) {
				printf("Article: %s\n", stocklist[j].articleName);
				printf("Amount : %i\n", stocklist[j].amount);
				break;
			}
		}
	}
	if(j == MAX_ENTRIES) {
		printf("Error! Article couldn't be found!\n");
	}
}

void printStocklist() {

	int i = 0;

	for(i = 0; i < MAX_ENTRIES; i++) {
		if(stocklist[i].articleName[0] != '\0') {
			printf("Article: %s\t", stocklist[i].articleName);
			printf("Amount: %i\n", stocklist[i].amount);
			}
	}
}

void mainMenu() {
	
	printf("Main menu\n");
	printf("\n");
	printf("Please choose between the following functions:\n");
	printf("1 - Add article\n");
	printf("2 - Remove article\n");
	printf("3 - Search entry\n");
	printf("4 - Print stocklist\n");
	printf("5 - Exit program\n");
}

void sidemenu_addArticle() {

	printf("Menu - Add article\n");
	printf("\n");
	printf("1 - Add article\n");
	printf("2 - Back to main menu\n");
}

void sidemenu_removeArticle() {
	
	printf("Menu - Remove article\n");
	printf("\n");
	printf("1 - Remove article\n");
	printf("2 - Back to main menu\n");
}

void sidemenu_searchEntry() {

	printf("Menu - Search Entry\n");
	printf("\n");
	printf("1 - Search entry\n");
	printf("2 - Back to main menu\n");
}

void sidemenu_printStocklist() {

	printf("Menu - Print Stocklist\n");
	printf("\n");
	printf("1 - Print stocklist\n");
	printf("2 - Back to main menu\n");
}

void menuEntry(int x) {

	fflush(stdin);
	scanf("%i", &x);
	printf("\n");
}

void wrongMenuEntry() {

	printf("\n");
	printf("Wrong entry! Please try again!\n");
	printf("\n");
}

int main() {

	int mainmenuAnswer;
	int sidemenuAnswer;
	int i = 0, j = 0;

	for(i = 0; i < MAX_ENTRIES; i++) {
		stocklist[i].articleName[0] = '\0';
		stocklist[i].amount = 0;
	}

	printf("Program - Stocklist management\n");
	printf("\n");

	for(;;) {
		mainMenu();
		menuEntry(mainmenuAnswer);
		switch(mainmenuAnswer) {
			case 1:
				for(;;) {
					sidemenu_addArticle();
					menuEntry(sidemenuAnswer);
					if(sidemenuAnswer == 1) {
						addArticle();
					}else if(sidemenuAnswer == 2) {
						printf("\n");
						break;
					}else {
						wrongMenuEntry();
					}
				}
				break;
			case 2:
				for(;;) {
					sidemenu_removeArticle();
					menuEntry(sidemenuAnswer);
					if(sidemenuAnswer == 1) {
						removeArticle();
					}else if(sidemenuAnswer == 2) {
						printf("\n");
						break;
					}else {
						wrongMenuEntry();
					}
				}
				break;
			case 3:
				for(;;) {
					sidemenu_searchEntry();
					menuEntry(sidemenuAnswer);
					if(sidemenuAnswer == 1) {
						searchEntry();
					}else if(sidemenuAnswer == 2) {
						printf("\n");
						break;
					}else {
						wrongMenuEntry();
					}
				}
				break;
			case 4: 
				for(;;) {
					sidemenu_printStocklist();
					menuEntry(sidemenuAnswer);
					if(sidemenuAnswer == 1) {
						printStocklist();
					}else if(sidemenuAnswer == 2) {
						printf("\n");
						break;
					}else {
						wrongMenuEntry();
					}
				}
				break;
			case 5:
			       	printf("Good bye!\n");
				return 0;
			default:
			       	wrongMenuEntry();
		       		break; 
		}		
	}
}
	
