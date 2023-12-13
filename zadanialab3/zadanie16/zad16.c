#include <stdio.h>

int main(){
    printf("Podaj liczbę z zakresu 1-5: ");
    int p;
    int D=3;
    scanf("%d", &p);
    if (p==D)
    {
        printf("Zgadłeś liczbę\n");
    }
    else
    {
        printf("Nie zgadłeś liczby. Masz 3 szanse\n");
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
                    printf("Nie zgadłeś liczby. Poprawna liczba to %d. Koniec gry\n", D);
                }
                
            }

        }
        
    }
    return 0;
}