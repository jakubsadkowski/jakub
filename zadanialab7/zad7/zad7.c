#include <stdio.h>

void wypelnijTablice(int *poczatek, int *koniec) {
    if (poczatek == NULL || koniec == NULL || poczatek >= koniec) {
        printf("Błędne wskaźniki na tablicę.\n");
        return;
    }

    int n = koniec - poczatek + 1;  // Obliczenie rozmiaru tablicy

    for (int i = 0; i < n; ++i) {
        *(poczatek + i) = i + 1;  // Wypełnianie tablicy liczbami od 1 do n
    }
}

int main() {
    int tablica[10];  // Przykładowa tablica
    int *poczatek = &tablica[0];
    int *koniec = &tablica[9];

    // Wywołanie funkcji wypełniającej tablicę
    wypelnijTablice(poczatek, koniec);

    // Wyświetlenie zawartości tablicy
    printf("Tablica po wypełnieniu:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", tablica[i]);
    }
    printf("\n");

    return 0;
}
