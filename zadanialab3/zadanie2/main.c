#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,w1,w2,w3,w4,w5;
    scanf("%d %d",&a, &b);
    w1=a+b;
    w2=a-b;
    w3=a*b;
    w4=a/b;
    w5=a%b;
    printf("dodawanie: \n");
    printf("%d",w1);
    printf("\n");
    printf("odejmowanie: \n");
    printf("%d",w2);
    printf("\n");
    printf("mnożenie: \n");
    printf("%d",w3);
    printf("\n");
    printf("dzielenie: \n");
    printf("%d",w4);
    printf("\n");
    printf("reszta \n");
    printf("%d",w5);
    return 0;
}
