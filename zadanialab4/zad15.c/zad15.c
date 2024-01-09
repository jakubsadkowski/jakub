#include <stdio.h>

#define X 3  // Liczba warstw
#define Y 3  // Liczba wierszy
#define Z 3  // Liczba kolumn

void wypisz_wieksze_elementy(int tab[X][Y][Z]) {
    for (int x = 0; x < X; x++) {
        for (int y = 0; y < Y; y++) {
            for (int z = 0; z < Z; z++) {
                int wartosc = tab[x][y][z];

                // Sprawdź sąsiadów
                for (int i = x - 1; i <= x + 1; i++) {
                    for (int j = y - 1; j <= y + 1; j++) {
                        for (int k = z - 1; k <= z + 1; k++) {
                            // Sprawdź czy sąsiad istnieje i czy wartość sąsiada jest mniejsza niż wartość elementu
                            if (i >= 0 && i < X && j >= 0 && j < Y && k >= 0 && k < Z &&
                                (i != x || j != y || k != z) && tab[i][j][k] < wartosc) {
                                printf("Element [%d][%d][%d] = %d jest wiekszy od swojego sasiada [%d][%d][%d] = %d\n",
                                       x, y, z, wartosc, i, j, k, tab[i][j][k]);
                            }
                        }
                    }
                }
            }
        }
    }
}

int main() {
    int tab_trójwymiarowa[X][Y][Z] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };

    // Wypisz elementy większe od swoich sąsiadów
    wypisz_wieksze_elementy(tab_trójwymiarowa);

    return 0;
}
