
#include <stdio.h>
int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 4, 10,20, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 20;
    int result = binarySearch(arr, 0, n - 1, x);
   if(result == -1) printf("Element is not present in array");
   else printf("Element is present at index %d",result);

}

// time complexicity is better for itterative and after boundary condition reccursive is better
