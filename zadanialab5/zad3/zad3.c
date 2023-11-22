#include <stdio.h>
#include <stdlib.h>
int spr(char s, int i)
{
    char wynik;
    wynik = printf("%c", s[i]);
    return wynik;
}

int main(){

    printf("Cześć!\n");
    char s;
    int i;
    scanf("%c %d", &s, &i);

    printf("%d", spr(s,i));


    return 0;
}
