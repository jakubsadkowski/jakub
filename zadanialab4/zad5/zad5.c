#include <stdio.h>

int main() {
    //Deklaracja liczb
    int i;
    int tab[i];
    //Podanie wielkości tablicy i liczb
    printf("Podaj wielkość tablicy: ");
    scanf("%d", &i);
    printf("Podaj liczby: ");
    for(int a=1; a<=i; a++)
    {
        scanf("%d", &tab[a]);
    }
    //Wyświetlanie liczb do kwadratu
    printf("\nLiczby z tablicy:\n");
    for(int a=1; a<=i; a++)
    {
        printf("%d\n", tab[a]);
    }





    return 0;
    }
