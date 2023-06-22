#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1;

    while (divisor <= 1000) {
        int temp = (num / (divisor * 10)) * divisor + (num % divisor);

        if (temp > largest) {
            largest = temp;
        }

        divisor *= 10;
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Invalid input. Please enter a 4-digit number.\n");
        return 1;
    }

    int largestNumber = findLargestNumber(num);

    printf("The largest number by deleting a single digit from %d is: %d\n", num, largestNumber);

    return 0;
}
