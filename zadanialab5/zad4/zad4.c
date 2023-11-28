#include <stdio.h>

char

int main()
{   
    
    char slowo[]="Jakub";

    int i;


    for (i =sizeof(slowo)-2; i >= 0; i--)
    {
        printf("%c\n", slowo[i]);
    }


    
    return 0;


}