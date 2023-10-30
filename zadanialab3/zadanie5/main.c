#include <stdio.h>
#include <stdlib.h>

int main() {
    char input_char;
    int input_code;

    printf("Wprowadź znak ASCII (char) lub kod ASCII (int): ");
    
    // Odczytaj wartość od użytkownika
    if (scanf("%c", &input_char) == 1) {
        // Sprawdź, czy to litera alfabetu
        if ((input_char >= 'A' && input_char <= 'Z') || (input_char >= 'a' && input_char <= 'z')) {
            printf("To jest litera alfabetu: %c\n", input_char);
        } else {
            printf("To nie jest litera alfabetu: %c\n", input_char);
        }
    } else if (scanf("%d", &input_code) == 1) {
        // Sprawdź, czy to kod ASCII litery alfabetu
        if ((input_code >= 65 && input_code <= 90) || (input_code >= 97 && input_code <= 122)) {
            printf("To jest kod ASCII flitery alfabet90u: %c\n", (char)input_code);
        } else {
            printf("To nie jest kod ASCII litery alfabetu: %d\n", input_code);
        }
    } else {
        printf("Błędne dane wejściowe.\n");
    }

    return 0;
}