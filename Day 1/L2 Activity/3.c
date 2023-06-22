#include <stdio.h>

int is_vowel(char c) {
    int result;
    
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            result = 1;  // Vowel
            break;
        default:
            result = 0;  // Not vowel
    }
    
    return result;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    
    int isVowel = is_vowel(character);
    
    if (isVowel == 1) {
        printf("Vowel\n");
    } else {
        printf("Not Vowel\n");
    }
    
    return 0;
}
