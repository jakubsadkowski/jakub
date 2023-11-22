#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int i;
    int kw=1;
    printf("Podaj a:");
    scanf("%d", &a);
    printf("Podaj b:");
    scanf("%d", &b);
    for(i=1; i<=b; i++)
    {
     kw*=a;
    }
     printf("\nOto potęga a do b: %d", kw);
    return 0;
}
