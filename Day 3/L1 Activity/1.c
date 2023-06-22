#include <stdio.h>

void printAscending(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    for (int i = 1; i <= n - 2; i++) {
        printf(" ");
    }
}

void printDescending(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

void printPattern(int n) {
    for (int i = n; i >= 1; i--) {
        printAscending(i);
        printSpaces(i);
        printDescending(i);
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}
