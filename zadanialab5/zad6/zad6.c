#include <stdio.h>

int koniecPrzekroju(int a1, int b1, int a2, int b2) {
    int a3, b3;

    // Znajdź początek i koniec przekroju
    a3 = (a1 > a2) ? a1 : a2;
    b3 = (b1 < b2) ? b1 : b2;

    // Zwróć koniec przekroju
    return b3;
}

int main() {
    // Przykładowe dane
    int a1, b1, a2, b2;

    printf("Podaj odcinek [a1, b1]: ");
    scanf("%d %d", &a1, &b1);

    printf("Podaj odcinek [a2, b2]: ");
    scanf("%d %d", &a2, &b2);

    int wynik = koniecPrzekroju(a1, b1, a2, b2);

    printf("Koniec przekroju odcinków [%d, %d] i [%d, %d] to %d.\n", a1, b1, a2, b2, wynik);

    return 0;
}
