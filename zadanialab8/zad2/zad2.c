#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define N 10


int main(){
    int n=10;
    int tab[N]={0,1,2,3,4,5,6,7,8,9};
    int left=1;
    int right=n;
    int result=false;
    int middle;
    while(left<=right)
    {
        middle=floor((left+right)/2);

        if (tab[middle] < n)
            left = middle + 1;
        else if (tab[middle] > n)
            right = middle - 1;
        else{
            result = true;
            break;
        }
    }

    printf("%d", result);
    return 0;
}
