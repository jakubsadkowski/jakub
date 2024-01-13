#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Zmienna globalna informująca o ilości znaków w tablicy
int n = 0;

// Funkcja wypisująca elementy tablicy
void wypiszTablice(char tab[]) {
    if (n == 0) {
        printf("Tablica jest pusta.\n");
    } else {
        printf("Elementy tablicy:\n");
        for (int i = 0; i < n; ++i) {
            printf("%c ", tab[i]);
        }
        printf("\n");
    }
}

// Funkcja dodająca nowy element do tablicy
void dodajElement(char tab[]) {
    if (n < MAX_SIZE) {
        char nowyZnak;
        printf("Podaj cyfrę do dodania: ");
        scanf(" %c", &nowyZnak);

        if (nowyZnak >= '0' && nowyZnak <= '9') {
            tab[n] = nowyZnak;
            n++;
            printf("Dodano cyfrę %c do tablicy.\n", nowyZnak);
        } else {
            printf("Podany znak nie jest cyfrą. Nie dodano do tablicy.\n");
        }
    } else {
        printf("Brak miejsca na dodanie nowego elementu. Tablica jest pełna.\n");
    }
}

// Funkcja usuwająca element z tablicy na podstawie indeksu
void usunElement(char tab[]) {
    if (n == 0) {
        printf("Tablica jest pusta. Nie można usunąć elementu.\n");
        return;
    }

    int indeks;
    printf("Podaj indeks elementu do usunięcia (0-%d): ", n - 1);
    scanf("%d", &indeks);

    if (indeks >= 0 && indeks < n) {
        for (int i = indeks; i < n - 1; ++i) {
            tab[i] = tab[i + 1];
        }
        n--;
        printf("Usunięto element z tablicy.\n");
    } else {
        printf("Błędny indeks elementu. Nie można usunąć elementu.\n");
    }
}

// Funkcja zwracająca sumę cyfr reprezentowanych przez znaki w tablicy
int sumaCyfr(char tab[]) {
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += tab[i] - '0';
    }
    return suma;
}

// Funkcja wypisująca elementy tablicy jako drzewo binarne
void wypiszDrzewoBinarne(char tab[]) {
    if (n == 0) {
        printf("Tablica jest pusta. Nie można wypisać drzewa binarnego.\n");
        return;
    }

    int poziom = 1;
    int elementyWPoziomie = 1;
    int indeks = 0;

    while (indeks < n) {
        for (int i = 0; i < elementyWPoziomie && indeks < n; ++i) {
            printf("%c ", tab[indeks]);
            indeks++;
        }

        printf("\n");

        poziom++;
        elementyWPoziomie *= 2;

        for (int i = 0; i < poziom; ++i) {
            printf("  ");
        }
    }
}

int main() {
    char tablica[MAX_SIZE];

    while (1) {
        printf("\nWybierz akcję:\n");
        printf("1. Wypisz elementy tablicy\n");
        printf("2. Dodaj nowy element do tablicy\n");
        printf("3. Usuń element z tablicy\n");
        printf("4. Oblicz sumę cyfr w tablicy\n");
        printf("5. Wypisz elementy tablicy jako drzewo binarne\n");
        printf("0. Zakończ program\n");

        int wybor;
        scanf("%d", &wybor);

        switch (wybor) {
            case 0:
                printf("Koniec programu.\n");
                exit(0);
            case 1:
                wypiszTablice(tablica);
                break;
            case 2:
                dodajElement(tablica);
                break;
            case 3:
                usunElement(tablica);
                break;
            case 4:
                printf("Suma cyfr w tablicy: %d\n", sumaCyfr(tablica));
                break;
            case 5:
                wypiszDrzewoBinarne(tablica);
                break;
            default:
                printf("Błędny wybór. Wybierz ponownie.\n");
        }
    }

    return 0;
}
