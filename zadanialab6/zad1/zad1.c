#include <stdio.h>


int silnia(int n);

int main()
{
    int n;
    scanf("%d", &n);
    int wynik = silnia(n);
    printf("%d! = %d\n", n, wynik);
    return 0;
}

int silnia(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * silnia(n - 1);
    }
}
