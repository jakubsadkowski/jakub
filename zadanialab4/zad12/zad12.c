#include <stdio.h>

int p(int n, int k){
    if ((k==0)||(k==n))
    {
        return 1;
    }
    else
    {
        return p(n-1,k-1)+p(n-1,k);
    } 
}

int main(){
    int n,k,i;
    scanf("%d",&i);
    printf("\n");
    for (n = 0; n < i; n++)
    {
        for (k = 0; k <= n; k++)
        {
            printf("%d   ",p(n,k));
        }
        printf("\n");
    }
    
}