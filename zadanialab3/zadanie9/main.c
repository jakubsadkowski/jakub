#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    float a1,a2,b1,b2;
    scanf("%f %f %f %f", &a1,&a2,&b1,&b2);

    float dlugosc = abs(a1-b1);
    float szerokosc = abs(a2-b2);
    float obwod =2*(dlugosc+szerokosc);
    float pole=dlugosc*szerokosc;


    printf("Pole prostokąta wynosi: %f, a obwód wynosi: %f",pole,obwod);

    return 0;
}
