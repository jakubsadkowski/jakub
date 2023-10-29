#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf("Największa: %d",a);
    else if (a<b && a>c)
    printf("Największa: %d",b);
    else
    printf("Największa: %d",c);


    return 0;
}
