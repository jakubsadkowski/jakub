#include <stdio.h>
#define N 100
int po(int tab[], int n){
    if (n==n-1||tab[n]==0)
    {
        return tab[n];
    }
    else
    {
        return tab[n]+po(tab,n+1);
    }
    return tab[n]+po(tab, n++);
}

int main(){
    printf("Hello World\n");
    int tab[N]={0};
    int n;
    scanf("%d", &n);

    for (int i = 0; n!=0; i++)
    {
        tab[i]=n%10;
        n=n/10;
    }
    printf("Oto wynik dodania cyfr tej liczby: %d",po(tab,0));    
    return 0;
}