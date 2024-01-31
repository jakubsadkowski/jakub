#include <stdio.h>

int main(){
    FILE *fp;
    char nazwa[25];
    scanf("%s", &nazwa);
    char znak;
    if((fp=fopen(nazwa, "r"))!=0){
        while(znak!=EOF)
        {
            znak=fgetc(fp);
            printf("%c",znak);
        }
        fclose (fp);
    }
    else{
            printf("Błąd");
    }
    return 0;
}
