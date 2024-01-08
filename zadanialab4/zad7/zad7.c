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

int main(){
    int n;
    printf("Podaj liczbę n: ");
    scanf("%d", &n);
    printf("\n");

    if (n<2)
    {
        printf("Nie jest to liczba pierwsza");
    }
    else
    {
        if (pierwsza(n))
        {
            printf("Jest to liczba pierwsza");
        }
        else
        {
            printf("Nie jest to liczba pierwsza");
        }
        
        
    }
    
        
    
    return 0;
}