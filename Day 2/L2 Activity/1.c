#include <stdio.h>

void swap_alternate_elements(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

void print_array(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Before swapping:\n");
    print_array(arr1, size1);
    
    swap_alternate_elements(arr1, size1);
    
    printf("After swapping:\n");
    print_array(arr1, size1);
    
    int arr2[] = {10, 20, 30, 40, 50, 60};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Before swapping:\n");
    print_array(arr2, size2);
    
    swap_alternate_elements(arr2, size2);
    
    printf("After swapping:\n");
    print_array(arr2, size2);
    
    return 0;
}
