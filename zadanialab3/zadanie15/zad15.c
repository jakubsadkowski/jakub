#include <stdio.h>

#define D 3

int main(){
    printf("Podaj liczbę z zakresu 1-5: ");
    int p;
    scanf("%d", &p);
    if (p==D)
    {
        printf("Zgadłeś liczbę\n");
    }
    else
    {
        printf("Nie zgadłeś liczby. Masz 2 szanse\n");
        scanf("%d", &p);        
        if (p==D)
        {
            printf("Zgadłeś liczbę\n");
        }
        else
        {
            printf("Nie zgadłeś liczby. Masz 1 szanse\n");
            scanf("%d", &p);        
            if (p==D)
            {
                printf("Zgadłeś liczbę\n");
            }
            else
            {
                printf("Nie zgadłeś liczby. Koniec gry\n");
            }

        }
        
    }
    return 0;
}