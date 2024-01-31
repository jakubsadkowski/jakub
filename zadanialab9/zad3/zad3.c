#include <stdio.h>

struct trojkat{
    int x;
    int y;
    int z;
};

void czy(int x, int y, int z){
    if(x+y>z&&x+z>y&&y+z>x){
        printf("Można stworzyć trójkąt");
    }
    else{
        printf("Nie można stworzyć trójkąt");
    }
}

int main(){
    struct trojkat p;
    scanf("%d", &p.x);
    scanf("%d", &p.y);
    scanf("%d", &p.z);
    czy(p.x,p.y,p.z);
    return 0;
}
