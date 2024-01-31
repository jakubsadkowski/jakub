#include <stdio.h>

struct Punkt{
    int x;
    int y;
};

int main(){
    struct Punkt q;
    struct Punkt p;
    int a,b;
    scanf("%d", &p.x);
    scanf("%d", &p.y);
    scanf("%d", &q.x);
    scanf("%d", &q.y);
    a=(q.y-p.y)/(q.x-p.x);
    b=q.y-a*q.x;
    printf("%d %d",a,b);
    return 0;
}
