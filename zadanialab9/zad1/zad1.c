#include <stdio.h>

struct Kontakt{
    char *imie;
    char *nazwisko;
    int telefon;
}typedef Kontakt;

int main(){
    int i=0;
    struct Kontakt p;
    struct Kontakt t;
    p.imie="jakub";
    p.nazwisko="sadkowski";
    p.telefon=672830869;
    t.imie="jakub2";
    t.nazwisko="sadkowski2";
    t.telefon=484720649;
    printf("%s ", p.imie);
    printf("%s ", p.nazwisko);
    printf("%d\n", p.telefon);
    printf("%s ", t.imie);
    printf("%s ", t.nazwisko);
    printf("%d\n ", t.telefon);

    return 0;
}
