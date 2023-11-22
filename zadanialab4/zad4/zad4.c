#include <stdio.h>

int main() {
    //Deklaracja liczb
    int i;
    int tab[i];
    int kw[i];
    //Podanie wielkości tablicy i liczb
    printf("Podaj wielkość tablicy: ");
    scanf("%d", &i);
    printf("Podaj liczby: ");
    for(int a=1; a<=i; a++)
    {
        scanf("%d", &tab[a]);
    }
    //Wyświetlanie liczb do kwadratu
    printf("\nPodane liczby podniesione do kwadratu:\n");
    for(int a=1; a<=i; a++)
    {
        kw[a]=tab[a]*tab[a];
        printf("%d\n", kw[a]);
    }





    return 0;
    }
