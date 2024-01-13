#include <stdio.h>
#include <string.h>

void wypiszRame(char tablica[], int szerokosc, int wysokosc) {
    int dlugosc = strlen(tablica);

    if (dlugosc == 0) {
        printf("Tablica jest pusta.\n");
        return;
    }

    // Wypisz górną ramkę
    for (int i = 0; i < szerokosc + 2; i++) {
        printf("*");
    }
    printf("\n");

    // Wypisz boki i treść
    for (int i = 0; i < wysokosc; i++) {
        printf("*");
        for (int j = 0; j < szerokosc; j++) {
            printf("%c", tablica[i % dlugosc]);
        }
        printf("*\n");
    }

    // Wypisz dolną ramkę
    for (int i = 0; i < szerokosc + 2; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    // Przykładowe dane
    char tablica[] = "Hello";
    int szerokosc = 8;
    int wysokosc = 5;

    // Wywołanie funkcji
    wypiszRame(tablica, szerokosc, wysokosc);

    return 0;
}
