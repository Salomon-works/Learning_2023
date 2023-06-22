#include <stdio.h>

void printBits(unsigned int num) {
    int bitPosition;
    unsigned int mask = 1 << 31; // Starting with the most significant bit (bit 31)

    for (bitPosition = 31; bitPosition >= 0; bitPosition--) {
        int bit = (num & mask) != 0;
        printf("%d", bit);
        
        if (bitPosition % 4 == 0) {
            printf(" "); // Print a space after every 4 bits for better readability
        }
        
        mask >>= 1; // Shift the mask to the right for the next bit position
    }
    
    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits representation: ");
    printBits(num);

    return 0;
}
