#include <stdio.h>

void sortujRosnaco(int *a, int *b, int *c) {
    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int x = 10, y = 5, z = 8;

    printf("Przed sortowaniem: x = %d, y = %d, z = %d\n", x, y, z);

    // Wywołanie funkcji sortującej
    sortujRosnaco(&x, &y, &z);

    printf("Po sortowaniu: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
