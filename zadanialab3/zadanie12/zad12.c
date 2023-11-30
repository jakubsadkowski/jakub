#include <stdio.h>

int main()
{
    printf("Podaj liczbę: ");
    int a;
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("\nLiczba %d dzieli się przez 2", a);
    }
    else if (a%3==0)
    {
        printf("\nLiczba %d dzieli się przez 3", a);
    }
    else if (a%5==0)
    {
        printf("\nLiczba %d dzieli się przez 5", a);  
    }
    else
    {
        printf("\nLiczba %d nie dzieli się przez liczby z zakresu 2-6", a);
    }
    
    
    
    return 0;
}