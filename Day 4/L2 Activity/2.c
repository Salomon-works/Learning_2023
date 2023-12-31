#include <stdio.h>
#include <math.h>

// Structure to represent a Cartesian coordinate point
struct Point {
    float x;
    float y;
};

// Function to calculate the distance between two points
float calculateDistance(struct Point p1, struct Point p2) {
    float distance;

    distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    return distance;
}

int main() {
    struct Point point1, point2;

    // Input the coordinates for the first point
    printf("Enter the coordinates for the first point (x y): ");
    scanf("%f %f", &point1.x, &point1.y);

    // Input the coordinates for the second point
    printf("Enter the coordinates for the second point (x y): ");
    scanf("%f %f", &point2.x, &point2.y);

    // Calculate the distance between the points
    float distance = calculateDistance(point1, point2);

    // Display the distance
    printf("The distance between the points is: %.2f\n", distance);

    return 0;
}
