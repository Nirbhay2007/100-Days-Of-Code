//Q103: Find pivot index where left sum equals right sum
#include <stdio.h>

int main() {
    int n, i, j;
    int pivot_index = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    
    // Check each index as potential pivot
    for (i = 0; i < n; i++) {
        int left_sum = 0, right_sum = 0;
        
        // Calculate left sum
        for (j = 0; j < i; j++) {
            left_sum += nums[j];
        }
        
        // Calculate right sum
        for (j = i + 1; j < n; j++) {
            right_sum += nums[j];
        }
        
        printf("Index %d: left_sum = %d, right_sum = %d\n", i, left_sum, right_sum);
        
        if (left_sum == right_sum) {
            pivot_index = i;
            break;
        }
    }
    
    printf("Pivot index: %d\n", pivot_index);
    
    return 0;
}

// Follow-up: O(n) solution
/*
int findPivotIndex(int nums[], int n) {
    int total_sum = 0, left_sum = 0;
    
    // Calculate total sum
    for (int i = 0; i < n; i++) {
        total_sum += nums[i];
    }
    
    // Check each index
    for (int i = 0; i < n; i++) {
        // Right sum = total_sum - left_sum - nums[i]
        if (left_sum == total_sum - left_sum - nums[i]) {
            return i;
        }
        left_sum += nums[i];
    }
    
    return -1;
}
*/