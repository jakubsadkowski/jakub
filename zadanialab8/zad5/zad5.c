#include <stdio.h>
#define N 10

int findMin(int A[], int i, int n) {
    if (i >= n) {
        // Zakres jest pusty lub zawiera tylko jednen element
        return i;
    }

    // Zakładamy, że pierwszy element jest najmniejszy
    int minIndex = i;

    // Iterujemy przez resztę zakresu
    for (int j = i + 1; j < n; j++) {
        if (A[j] < A[minIndex]) {
            // Znaleziono nowy najmniejszy element
            minIndex = j;
        }
    }

    return minIndex;
}

int main() {
    int i = 0;
    int c;
    int tab[N] = {5, 6, 4, 7, 8, 1, 3, 2, 9, 0};
    int minIndex;

    while (i < N - 1) {
        minIndex = findMin(tab, i, N);

        // Zamień najmniejszy element z aktualnym elementem tablicy
        c = tab[i];
        tab[i] = tab[minIndex];
        tab[minIndex] = c;

        i++;
    }

    // Wypisz posortowaną tablicę
    for (int a = 0; a < N; a++) {
        printf("%d ", tab[a]);
    }

    return 0;
}
