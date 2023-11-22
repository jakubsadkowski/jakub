#include <stdio.h>
#include <stdlib.h>
int spr(char a, char b)
{
    if(a==b)
    return 1;
    else
    return 0;
}

int main(){

    printf("Cześć!\n");
    char a,b;
    scanf("%c %c", &a, &b);

    printf("%d", spr(a,b));


    return 0;
}
