#include <stdio.h>

// Function to convert decimal to BCD
unsigned char decimalToBCD(unsigned char decimal) {
    return ((decimal / 10) << 4) + (decimal % 10);
}

int main() {
    unsigned char decimal = 25; // Example decimal value
    
    // Convert decimal to BCD
    unsigned char bcd = decimalToBCD(decimal);
    
    printf("Decimal: %d\n", decimal);
    printf("BCD: 0x%02X\n", bcd);
    
    return 0;
}
