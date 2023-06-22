#include <stdio.h>

int compare_boxes(int box1[], int box2[], int size) {
    int count[size];
    
    // Initialize count array with zeros
    for (int i = 0; i < size; i++) {
        count[i] = 0;
    }
    
    // Count the occurrences of items in box1
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (box1[i] == box2[j]) {
                count[i]++;
                break;
            }
        }
    }
    
    // Check if count array has all elements equal to 1
    for (int i = 0; i < size; i++) {
        if (count[i] != 1) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int box1[] = {200, 10, -90};
    int box2[] = {-90, 200, 10};
    int size = sizeof(box1) / sizeof(box1[0]);
    
    int result = compare_boxes(box1, box2, size);
    
    if (result == 1) {
        printf("Boxes are equal.\n");
    } else {
        printf("Boxes are not equal.\n");
    }
    
    return 0;
}
