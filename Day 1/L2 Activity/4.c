#include <stdio.h>

int find_char_type(char c) {
    int result;
    
    if (c >= 'A' && c <= 'Z') {
        result = 1;  // Uppercase letter
    } else if (c >= 'a' && c <= 'z') {
        result = 2;  // Lowercase letter
    } else if (c >= '0' && c <= '9') {
        result = 3;  // Digit
    } else if (c >= 32 && c <= 126) {
        result = 4;  // Printable symbol
    } else {
        result = 5;  // Non-printable symbol
    }
    
    return result;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    
    int charType = find_char_type(character);
    
    switch (charType) {
        case 1:
            printf("Uppercase letter\n");
            break;
        case 2:
            printf("Lowercase letter\n");
            break;
        case 3:
            printf("Digit\n");
            break;
        case 4:
            printf("Printable symbol\n");
            break;
        case 5:
            printf("Non-printable symbol\n");
            break;
        default:
            printf("Invalid character type\n");
    }
    
    return 0;
}
