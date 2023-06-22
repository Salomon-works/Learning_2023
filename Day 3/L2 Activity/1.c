#include <stdio.h>

// Function to set a bit at a given position
unsigned char setBit(unsigned char num, int position) {
    unsigned char mask = 1 << position;
    return num | mask;
}

// Function to clear a bit at a given position
unsigned char clearBit(unsigned char num, int position) {
    unsigned char mask = ~(1 << position);
    return num & mask;
}

// Function to toggle a bit at a given position
unsigned char toggleBit(unsigned char num, int position) {
    unsigned char mask = 1 << position;
    return num ^ mask;
}

int main() {
    unsigned char num = 0x33; // Example value

    // Set bit at position 3
    unsigned char setBitResult = setBit(num, 3);
    printf("After setting bit 3: 0x%02X\n", setBitResult);

    // Clear bit at position 2
    unsigned char clearBitResult = clearBit(num, 2);
    printf("After clearing bit 2: 0x%02X\n", clearBitResult);

    // Toggle bit at position 5
    unsigned char toggleBitResult = toggleBit(num, 5);
    printf("After toggling bit 5: 0x%02X\n", toggleBitResult);

    return 0;
}
