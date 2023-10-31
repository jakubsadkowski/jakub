#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a) 
    {
        printf("Można stworzyć z tych boków trójkąt");
    }
    else
    {
        printf("Nie można stworzyć z tych boków trójkąt");
    }
    
    return 0;
}
