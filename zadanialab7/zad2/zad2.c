#include <stdio.h>

int main(){
    int tablica[10];

    for(int i=0; i<=9; i++){
        scanf("%d", &*(tablica+i));
    }

    printf("\n");
    for(int i=0; i<=9; i++){

        printf("%d\n", *(tablica+i));
    }
}
