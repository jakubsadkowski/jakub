#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool po(char *s, int n){

    int k=n;
    if (s[n]==0||s[n]=='\0')
    {
        if (s[k-n]==s[n-1])
        {
            po(s,n-1);
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (s[k-n]==s[n])
        {
            k++;
            po(s,n-1);
            return true;
        }
        else
        {
            return false;
        }
    }
}




int main(){
    printf("Podaj słowo: ");
    char s[100];
    scanf("%s",&s);
    printf("\n");
    int n=strlen(s);

    if (po(s,n))
    {
        printf("Słowo jest palindromem\n");
    }
    else
    {
        printf("Słowo nie jest palindromem\n");
    }
    
    
    return 0;
}