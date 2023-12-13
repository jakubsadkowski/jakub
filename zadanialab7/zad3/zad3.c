#include <stdio.h>

int main(){
    int a=6,b=8;
    printf("a=%d, b=%d\n", a,b);
    op(&a, &b);
    printf("a=%d, b=%d\n", a,b);
    return 0;
}
void op(int *c, int *d){
    int e=*c;
    *c=*d;
    *d=e;
}
