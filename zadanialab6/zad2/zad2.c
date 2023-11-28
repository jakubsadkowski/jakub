#include <stdio.h>


int main()
{
    int a,b,wynik;
    scanf("%d %d", &a, &b);
    wynik=nwd(a,b);
    printf("%d", wynik);
}

int nwd(int a , int b)
{
    if(a*b!=0)
    {
        if(a>=b)
        {
        a=a%b;
        }
        else
        {
        b=b%a;
        }
        return nwd(a,b);
    }
    return a+b;

}
