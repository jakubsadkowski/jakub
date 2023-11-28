#include <stdio.h>

int main()
{
    printf("Podaj n-ty wyraz ciągu Fibonacciego: ");
    int n, wynik;
    scanf("%d", &n);
    wynik = fib(n);
    printf("\nOto wynik: %d\n", wynik);
    return 0;
}

int fib(int n)
{
    if(n>2)
    return fib(n-1) + fib(n-2);
    else
    return 1;
}
