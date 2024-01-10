#include <stdio.h>
int bin(int n)
{
    if(n>0)
    {
       
        bin(n/2);
        printf("%d",n%2);
    }
    else
    {
        return 1;
    }
    

}
int main()
{
    int n, wynik;
    scanf("%d", &n);
    wynik = bin(n);
    return 0;
}

