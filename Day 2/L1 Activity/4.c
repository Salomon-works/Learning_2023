#include <stdio.h>

int count_set_bits(int arr[], int size) {
    int total_bits = 0;
    
    for (int i = 0; i < size; i++) {
        int num = arr[i];
        int bits = 0;
        
        while (num != 0) {
            if (num & 1) {
                bits++;
            }
            num >>= 1;
        }
        
        total_bits += bits;
    }
    
    return total_bits;
}

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = count_set_bits(arr, size);
    
    printf("Total number of set bits: %d\n", result);
    
    return 0;
}
