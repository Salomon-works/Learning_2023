#include <stdio.h>

void findSmallestAndLargestDigits(int n, ...) {
    int smallestDigit = 9;
    int largestDigit = 0;

    va_list args;
    va_start(args, n);

    for (int i = 0; i < n; i++) {
        int num = va_arg(args, int);

        while (num != 0) {
            int digit = num % 10;
            smallestDigit = (digit < smallestDigit) ? digit : smallestDigit;
            largestDigit = (digit > largestDigit) ? digit : largestDigit;
            num /= 10;
        }
    }

    va_end(args);

    if (smallestDigit == 9 || largestDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallestDigit);
        printf("Largest digit: %d\n", largestDigit);
    }
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of values should be greater than 0.\n");
        return 1;
    }

    int num;
    va_list args;
    va_start(args, n);

    printf("Enter the values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        va_arg(args, int) = num;
    }

    va_end(args);

    findSmallestAndLargestDigits(n, ...);

    return 0;
}
