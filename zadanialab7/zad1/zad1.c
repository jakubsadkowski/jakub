#include <stdio.h>
int g=9;
int main(){
    printf("Hello World!\n");
    int p=g;
    printf("g: %p p: %p\n", &g, &p);
    nw(g,p);
    return 0;
}
int nw(int a, int b){
    printf("a: %p b: %p\n", &a, &b);
}
