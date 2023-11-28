#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("\n");
    przedzial(n);
    return 0;
}
int przedzial(int n)
{

    if(1<=n)
    {
        printf("%d\n", n);
        przedzial(n-1);
    }

}
