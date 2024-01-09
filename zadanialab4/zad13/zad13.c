#include <stdio.h>

int p(int a){
    for (int i = 32; i < 127; i++)
    {
        printf("%c  ", (char)i);
        if ((i-31)%a==0)
        {
            printf("\n");
        }      
    }
}
int main(){
    int a;
    scanf("%d", &a);
    p(a);
}
