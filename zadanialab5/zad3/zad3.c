#include <stdio.h>

char slowo(char *s, int i)
{

    char wynik = s[i];
    return wynik;

}

int main(){

    printf("Podaj słowo i liczbę:\n");
    int i;
    char s[100];
    scanf("%s %d", &s, &i);
    printf("%c" ,slowo(s, i));
    
    return 0;
}
