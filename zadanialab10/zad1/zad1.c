#include <stdio.h>

int main(){
    FILE *fp;
    if((fp=fopen("./test.txt", "r"))!=0){
        printf("Dany plik się znajduje");
        fclose (fp);
    }
    else{
            printf("Błąd");
    }
    return 0;
}
