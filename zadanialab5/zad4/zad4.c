#include <stdio.h>
#include <string.h>

int saIdentyczne(char znak1, char znak2) {
    return (znak1 == znak2) ? 1 : 0;
}

char ithZnak(char s[], int i) {
    return (i >= 0 && s[i] != '\0') ? s[i] : '\0';
}

int czyPalindrom(char s[]) {
    int dlugosc = strlen(s);
    int i, j;

    for (i = 0, j = dlugosc - 1; i < j; i++, j--) {
        if (!saIdentyczne(ithZnak(s, i), ithZnak(s, j))) {
            return 0; // Nie jest palindromem
        }
    }

    return 1; // Jest palindromem
}

int main() {
    char napis[100];

    printf("Podaj słowo: ");
    scanf("%s", napis);

    if (czyPalindrom(napis)) {
        printf("Słowo \"%s\" jest palindromem.\n", napis);
    } else {
        printf("Słowo \"%s\" nie jest palindromem.\n", napis);
    }

    return 0;
}