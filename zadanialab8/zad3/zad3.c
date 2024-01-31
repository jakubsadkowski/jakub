#include <stdio.h>
#define N 10

int main(){
    int i=N;
    int j;
    int c;
    int tab[N]={5,6,4,7,8,1,3,2,9,0};
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

    for(int a=0; a<=N-1; a++)
    {
        printf("%d\n", tab[a]);
    }
    return 0;
}
