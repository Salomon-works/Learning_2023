#include <stdio.h>

char *xstrchr(char *string, char ch) {
    while (*string != '\0') {
        if (*string == ch) {
            return string;
        }
        string++;
    }
    
    return NULL;
}

int main() {
    char str[] = "Hello, World!";
    char ch1 = 'o';
    char ch2 = 'z';
    
    char *result1 = xstrchr(str, ch1);
    char *result2 = xstrchr(str, ch2);
    
    if (result1 != NULL) {
        printf("'%c' found at position: %ld\n", ch1, result1 - str);
    } else {
        printf("'%c' not found in the string.\n", ch1);
    }
    
    if (result2 != NULL) {
        printf("'%c' found at position: %ld\n", ch2, result2 - str);
    } else {
        printf("'%c' not found in the string.\n", ch2);
    }
    
    return 0;
}
