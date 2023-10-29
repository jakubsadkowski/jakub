#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    int x = (int) input;

    printf("Podaj znak ASCII lub kod ASCII: ");
    scanf("%d", &x);

    if ((x >= 65 &&  <= 90) || (input >= 97 && input <= 122)) {
        printf("To jest litera alfabetu.\n");
    } else {
        printf("To nie jest litera alfabetu.\n");
    }

    return 0;
}
