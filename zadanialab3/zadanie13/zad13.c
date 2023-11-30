#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>


int main()
{
    int w;
    float wynik;
    printf("Dla 0 radianów wybierz 1\n");
    printf("Dla 1/6 Pi rad wybierz 2\n");
    printf("Dla 1/4 Pi rad wybierz 3\n");
    printf("Dla 1/3 Pi rad wybierz 4\n");
    printf("Dla 1/2 Pi rad wybierz 5\n");


    scanf("%d", &w);

    switch (w)
    {
    case 1:
        printf("0 radianów to 0 stopni");
        break;
    case 2:
        wynik=(M_PI/6)*(180/M_PI);
        printf("1/6 Pi radianów to %f stopni", wynik);
        break;
    case 3:
        wynik=(M_PI/4)*(180/M_PI);
        printf("1/4 Pi radianów to %f stopni", wynik);
        break;
    case 4:
        wynik=(M_PI/3)*(180/M_PI);
        printf("1/3 Pi radianów to %f stopni", wynik);
        break;
    case 5:
        wynik=(M_PI/2)*(180/M_PI);
        printf("1/2 Pi radianów to %f stopni", wynik);
        break;
    default:
        printf("Błędne dane");
        break;
    }
}