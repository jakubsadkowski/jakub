#include <stdio.h>

int q(int *tab, int roz) {
    int p = 0;
    for (int i = 1; i < roz; ++i) {
        if (tab[i] > tab[p]) {
            p = i;
        }
    }

    int w = tab[p];
    tab[p] = 0;
    return w;
}

int main() {
    int tab[] = {1,2,3,4,5,5,6,7,8,9,10};
    int roz = sizeof(tab) / sizeof(tab[0]);
    int naj = q(tab, roz);

    printf("Największy element: %d\n", naj);
    printf("Tablica po zamianie:\n");

    for (int i = 0; i < roz; ++i) {
        printf("%d ", tab[i]);
    }
    printf("\n");


    return 0;
}
