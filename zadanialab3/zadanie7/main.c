#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dzien, miesiac, rok;
    scanf("%d %d %d", &dzien, &miesiac, &rok);
    if ((dzien>=1&&dzien<=31)&&(miesiac>=1&&miesiac<=12)&&(rok>0))
    {
        printf("Rok jest poprawny");
    }
    else
    {
        printf("Rok jest niepoprawny");
    }
        
    return 0;
}
