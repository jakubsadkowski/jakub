#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    int k;
    float wynik;
    printf("Podaj kąt: ");
    scanf("%d", &k);
    wynik=(k*M_PI)/180;
    printf("Kąt w radianach wynosi: %f", wynik);
    return 0;
}