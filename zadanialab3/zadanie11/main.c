#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a*a+b*b==c*c)
    {
        printf("Trójkąt jest prostkątny");
    }
    else
    {
        printf("Trójkąt nie jest prostkątny");        
    }
    
    
    return 0;
}
