#include <stdio.h>

// Funkcja do wypisywania prostokąta
void wypisz_prostokat(int tab[][100], int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            if (tab[i][j] == 1) {
                printf("x ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int wiersze, kolumny;

    // Wczytaj wymiary tablicy
    printf("Podaj liczbe wierszy: ");
    scanf("%d", &wiersze);
    printf("Podaj liczbe kolumn: ");
    scanf("%d", &kolumny);

    // Zadeklaruj tablicę dwuwymiarową
    int tablica[100][100];

    // Wczytaj tablicę
    printf("Podaj elementy tablicy (0 lub 1):\n");
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            scanf("%d", &tablica[i][j]);
        }
    }

    // Wypisz prostokąt
    printf("\nProstokat o wymiarach zaleznych od tablicy:\n");
    wypisz_prostokat(tablica, wiersze, kolumny);

    return 0;
}