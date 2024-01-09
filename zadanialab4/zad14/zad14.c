#include <stdio.h>

#define X 2  // Liczba warstw
#define Y 3  // Liczba wierszy
#define Z 3  // Liczba kolumn

void przepisz_tablice(int tab[X][Y][Z], int tab_jednowymiarowa[X * Y * Z]) {
    int index = 0;

    for (int x = 0; x < X; x++) {
        for (int y = 0; y < Y; y++) {
            for (int z = 0; z < Z; z++) {
                tab_jednowymiarowa[index++] = tab[x][y][z];
            }
        }
    }
}

int main() {
    int tab_trójwymiarowa[X][Y][Z] = {
        {{1, 2, 3}, {5, 6, 7}, {9, 10, 11}},
        {{13, 14, 15}, {17, 18, 19}, {21, 22, 23}}
    };

    int tab_jednowymiarowa[X * Y * Z];

    // Przepisz tablicę trójwymiarową na jednowymiarową
    przepisz_tablice(tab_trójwymiarowa, tab_jednowymiarowa);

    // Wypisz zawartość nowej tablicy
    printf("Tablica jednowymiarowa:\n");
    for (int i = 0; i < X * Y * Z; i++) {
        printf("%d ", tab_jednowymiarowa[i]);
    }
    printf("\n");

    return 0;
}
