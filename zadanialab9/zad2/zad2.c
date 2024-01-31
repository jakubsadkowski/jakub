#include <stdio.h>

struct Punkt{
    int x;
    int y;
};

int main(){
    struct Punkt p;
    scanf("%d", &p.x);
    scanf("%d", &p.y);
    printf("%d\n", p.x);
    printf("%d\n", p.y);
    return 0;
}
