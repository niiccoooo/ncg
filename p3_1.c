#include <stdio.h>

int laengeZeichenkette (const char s[]) {

    int laenge = 0;

    for(; '\0' != s[laenge]; laenge++);
    return laenge;
}

int sucheZeichen(const char s[], char c) {

    int anzahl = 0;
    int i;

    for(; '\0' != s[i]; i++) {
            if (c == s[i]) {
                anzahl++;
            }
    }
    return anzahl;
}

int main() {

    int i, j;
    const int zeichenlaenge = 50;
    char name[zeichenlaenge];
    char answer = 0;
    char buchstabe = 0;

    printf("Bitte Namen eingeben:  ");
    scanf("%s", &name);
    printf("\n");
    printf("%s hat %i Zeichen\n", name, laengeZeichenkette(name));
    printf("\n");

    for (;;) {
            printf("Moechtest du nach einem Buchstaben in %s suchen (j / n)? ", name);
            fflush(stdin);
            scanf("%c", &answer);
            printf("\n");
            switch (answer) {
                case          'j': printf("Bitte Buchstaben eingeben: "); // Es wird zwischen Groß- und Kleinschreibung unterschieden
                                   fflush(stdin);
                                   scanf("%c", &buchstabe);
                                   printf("\n");
                                   printf("Der Buchstabe %c kommt %i-mal vor.\n", buchstabe, sucheZeichen(name, buchstabe));
                                   printf("\n");
                                   break;
                case          'n': printf("Auf Wiedersehen!\n");
                                   return 0;
                case !'j' && !'n': printf("Falsche Eingabe!\n");
                                   break;
            }
    }

    return 0;
}
