#include <stdio.h>

int main() {
    int a, b;

    // Wczytaj liczby od użytkownika
    printf("Podaj liczbe a: ");
    scanf("%d", &a);

    printf("Podaj liczbe b: ");
    scanf("%d", &b);

    // Znajdź najmniejszą potęgę liczby a większą od b
    int c = 0;
    int wynik = 1;

    while (wynik <= b) {
        c++;
        wynik *= a;
    }

    // Wyświetl wynik
    printf("Najmniejsza potega liczby %d, ktora jest wieksza od %d, to %d.\n", a, b, c);

    return 0;
}
