#include <stdio.h>
#include <stdlib.h>

int main() {
    char input;
    
    printf("Podaj znak ASCII lub kod ASCII: ");
    scanf("%c", &input);
    
    if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')) 
        printf("To jest litera alfabetu.\n");
    else 
        printf("To nie jest litera alfabetu.\n");
    

    return 0;
}