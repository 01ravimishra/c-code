#include <stdio.h>

int linearSearch(int arr[], int n, int value) { 
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) { 
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    int result = linearSearch(arr, n, 20); 

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}