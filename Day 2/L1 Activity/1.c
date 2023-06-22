#include <stdio.h>

void print_exponent(double num) {
    unsigned long long *ptr = (unsigned long long *)&num;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;
    unsigned long long exponent_hex = exponent - 1023;
    
    printf("Exponent (Hex): 0x%llX\n", exponent_hex);
    
    printf("Exponent (Binary): ");
    for (int i = 11; i >= 0; --i) {
        unsigned long long bit = (exponent >> i) & 0x1;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    
    printf("Double Value: %f\n", x);
    print_exponent(x);
    
    return 0;
}
