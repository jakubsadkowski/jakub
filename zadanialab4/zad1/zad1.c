#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n;
    int sum=0;
    int kw;
    scanf("%d", &i);
    for(n=1;n<=i;n++)
    {
     kw = n*n;
     sum+=kw;
    }
     printf("%d\n", sum);
    return 0;
}
