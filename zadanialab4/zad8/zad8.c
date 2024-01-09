#include <stdio.h>
#include <stdbool.h>
bool pierwsza(int n){
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i==0)
        {
            return false;
        }  
    }
    return true;
}
int main() {
    int a,b,i=1;
    printf("Podaj liczbę a i b: ");
    scanf("%d %d",&a, &b);
    printf("\n");
    while (i<=b)
    {
        if (a<2)
        {
            printf("Nie jest to liczba pierwsza");
            break;
        }
        else
        {
            if (pierwsza(a))
            {
                printf("%d\n",a);
                a++;
                i++;
            }
            else
            {
                a++;
            }
        }
        
    }

    return 0;
    }
