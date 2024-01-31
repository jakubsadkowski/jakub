#include <stdio.h>
#define N 10

int main(){
    int i=1;
    int tab[N]={9,8,7,6,5,4,3,2,1,0};
    int element;
    int k;
    while(i<N)
    {
        element=tab[i];
        k=i-1;
        while(k>=0 && tab[k]>element)
        {
            tab[k+1]=tab[k];
            k--;
        }

        tab[k+1]=element;
        i++;
    }
        for (int a = 0; a < N; a++) {
        printf("%d ", tab[a]);
    }

    return 0;
}
