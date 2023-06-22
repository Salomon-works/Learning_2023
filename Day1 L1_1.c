#include <stdio.h>

int UsingIfElse(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int UsingTernary(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    int max1 = UsingIfElse(num1, num2);
    int max2 = UsingTernary(num1, num2);

    printf("Using if-else: %d\n", max1);
    printf("Using ternary operator: %d\n", max2);

    return 0;
}
