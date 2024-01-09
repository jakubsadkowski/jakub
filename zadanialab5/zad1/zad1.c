#include <stdio.h>
#include <stdlib.h>
int dodawanie()
{
   printf("Podaj liczby a i b:\n");
   int a,b,wynik;
   scanf("%d %d", &a,&b);
   wynik=a+b;
   printf("Wynik: %d", wynik);
}
int odejmowanie()
{
   printf("Podaj liczby a i b:\n");
   int a,b,wynik;
   scanf("%d %d", &a,&b);
   wynik=a-b;
   printf("Wynik: %d", wynik);
}
int mnozenie()
{
   printf("Podaj liczby a i b:\n");
   int a,b,wynik;
   scanf("%d %d", &a,&b);
   wynik=a*b;
   printf("Wynik: %d", wynik);
}
int dzielenie()
{
   printf("Podaj liczby a i b:\n");
   float a,b,wynik;
   scanf("%f %f", &a,&b);
   wynik=a/b;
   printf("Wynik: %f", wynik);
}

int main(){
    printf("Podaj jakie chcesz działanie zrobić: dodawanie(d), odejmowanie(o), mnożenie(m), dzielenie(q):\n");
    char znak;
    scanf("%c", &znak);
    switch(znak){
    case'd':dodawanie(); break;
    case'o':odejmowanie(); break;
    case'm':mnozenie(); break;
    case'q':dzielenie(); break;
    };

    return 0;
}
