#include <stdio.h>

// Structure to represent a point
struct Point {
    int x;
    int y;
};

// Function to swap the fields of two structures using pointers
void swapFields(struct Point *p1, struct Point *p2) {
    int tempX = p1->x;
    int tempY = p1->y;

    p1->x = p2->x;
    p1->y = p2->y;

    p2->x = tempX;
    p2->y = tempY;
}

int main() {
    struct Point point1, point2;

    // Input the coordinates for the first point
    printf("Enter the coordinates for the first point (x y): ");
    scanf("%d %d", &point1.x, &point1.y);

    // Input the coordinates for the second point
    printf("Enter the coordinates for the second point (x y): ");
    scanf("%d %d", &point2.x, &point2.y);

    printf("\nBefore swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    // Swap the fields of the two structures using pointers
    swapFields(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
