#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

double calculateSurfaceArea(struct Box* boxPtr) {
    double length = boxPtr->length;
    double width = boxPtr->width;
    double height = boxPtr->height;

    return 2 * (length * width + length * height + width * height);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;

    // Input the dimensions of the box
    printf("Enter the length of the box: ");
    scanf("%lf", &(boxPtr->length));

    printf("Enter the width of the box: ");
    scanf("%lf", &(boxPtr->width));

    printf("Enter the height of the box: ");
    scanf("%lf", &(boxPtr->height));

    // Calculate and display the volume
    double volume = calculateVolume(boxPtr);
    printf("Volume of the box: %.2lf\n", volume);

    // Calculate and display the total surface area
    double surfaceArea = calculateSurfaceArea(boxPtr);
    printf("Total surface area of the box: %.2lf\n", surfaceArea);

    return 0;
}
