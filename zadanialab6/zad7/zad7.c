#include <stdio.h>
#define N 10
int po(int tab[], int b, int n){

    if (tab[n]!=b)
    {
        n++;
        po(tab, b, n++);
    }
    else if (n < N) {
        printf("Liczba jest w tablicy\n");
    } else {
        printf("Liczba nie jest w tablicy\n");
    }
    
}
int main(){
    int i=N;
    int j;
    int c;
    int b;
    int tab[N]={5,6,4,7,8,1,3,2,9,0};
    scanf("%d", &b);
    while(i!=0)
    {
    j=0;
        while(j<i)
        {
            if (tab[j+1]<tab[j])
            {
                c=tab[j];
                tab[j]=tab[j+1];
                tab[j+1]=c;
            }
            j++;
        }
    i--;
    }
    po(tab, b, 0);

    return 0;
}
