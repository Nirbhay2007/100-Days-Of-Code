//Q102: Find ceil of x in sorted array
#include <stdio.h>

int main() {
    int n, x, i;
    int ceil_index = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter sorted array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter value x: ");
    scanf("%d", &x);
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("x: %d\n", x);
    
    // Find ceil of x (smallest element >= x)
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceil_index = i;
            break;
        }
    }
    
    if (ceil_index != -1) {
        printf("Ceil of %d is %d at index %d\n", x, arr[ceil_index], ceil_index);
    } else {
        printf("Ceil of %d does not exist\n", x);
        printf("Index: %d\n", ceil_index);
    }
    
    return 0;
}

// Follow-up: O(log n) solution using binary search
/*
int findCeil(int arr[], int n, int x) {
    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= x) {
            result = mid;
            right = mid - 1; // Continue searching left for smaller index
        } else {
            left = mid + 1;
        }
    }
    return result;
}
*/