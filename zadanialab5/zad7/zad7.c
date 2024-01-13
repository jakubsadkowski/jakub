#include <stdio.h>

// Funkcja sprawdzająca, czy element T[i][j][k] jest większy od swoich sąsiadów
int czyWiekszy(int x, int y, int z, int n, int m, int p, int tab[x][y][z]) {
    int i, j, k;
    int wartosc = tab[x][y][z];

    // Sprawdź sąsiadów wokół elementu
    for (i = -1; i <= 1; i++) {
        for (j = -1; j <= 1; j++) {
            for (k = -1; k <= 1; k++) {
                // Sprawdź, czy współrzędne są w zakresie tablicy
                if (x + i >= 0 && x + i < n && y + j >= 0 && y + j < m && z + k >= 0 && z + k < p) {
                    // Sprawdź, czy element sąsiada jest mniejszy lub równy
                    if (wartosc <= tab[x + i][y + j][z + k]) {
                        return 0; // Nie jest większy od co najmniej jednego sąsiada
                    }
                }
            }
        }
    }

    return 1; // Jest większy od wszystkich sąsiadów
}

int main() {
    // Przykładowe dane
    int n, m, p;
    printf("Podaj wymiary tablicy trójwymiarowej (n m p): ");
    scanf("%d %d %d", &n, &m, &p);

    int tab[n][m][p];

    // Wprowadź dane
    printf("Podaj elementy tablicy trójwymiarowej:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                printf("tab[%d][%d][%d]: ", i, j, k);
                scanf("%d", &tab[i][j][k]);
            }
        }
    }

    // Wypisz elementy większe od swoich sąsiadów
    printf("Elementy większe od swoich sąsiadów:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < p; k++) {
                if (czyWiekszy(i, j, k, n, m, p, tab)) {
                    printf("tab[%d][%d][%d]: %d\n", i, j, k, tab[i][j][k]);
                }
            }
        }
    }

    return 0;
}
