#include <stdio.h>

int main()
{
    int n, wynik;
    scanf("%d", &n);
    wynik = bin(n);
    printf("%d", wynik);
    return 0;
}
int bin(int n)
{
    if(n>=0)
    {
        n%2
        return bin(n/2);
    }

}
