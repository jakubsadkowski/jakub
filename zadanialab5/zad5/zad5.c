#include <stdio.h>

int przekroj(int a1, int b1, int a2, int b2) {
    int a3, b3;

    // Znajdź początek i koniec przekroju
    a3 = (a1 > a2) ? a1 : a2;
    b3 = (b1 < b2) ? b1 : b2;

    // Sprawdź, czy przekrój jest zbiorem pustym
    if (a3 > b3) {
        return -1;
    } else {
        return a3;
    }
}

int main() {
    // Przykładowe dane
    int a1, b1, a2, b2;

    printf("Podaj odcinek [a1, b1]: ");
    scanf("%d %d", &a1, &b1);

    printf("Podaj odcinek [a2, b2]: ");
    scanf("%d %d", &a2, &b2);

    int wynik = przekroj(a1, b1, a2, b2);

    if (wynik == -1) {
        printf("Przekrój odcinków [%d, %d] i [%d, %d] jest zbiorem pustym.\n", a1, b1, a2, b2);
    } else {
        printf("Przekrój odcinków [%d, %d] i [%d, %d] to odcinek [%d, %d].\n", a1, b1, a2, b2, wynik, wynik);
    }

    return 0;
}
