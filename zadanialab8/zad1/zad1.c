#include <stdio.h>
#include <stdbool.h>
#define N 10

int main(){
    int n=6;
    int tab[N]={1,2,3,4,5,6,7,8,9,0};
    int index=1;
    int wynik;
    wynik=false;
    while(index<=N){
        if(tab[index]==n)
        wynik=true;

        index++;
    }
    printf("%d\n", wynik);

    return 0;
}
