//Q104: Find pivot integer x where sum(1 to x) equals sum(x to n)
#include <stdio.h>

int main() {
    int n, x;
    int pivot = -1;
    
    printf("Enter positive integer n: ");
    scanf("%d", &n);
    
    printf("n: %d\n", n);
    
    // Check each possible pivot from 1 to n
    for (x = 1; x <= n; x++) {
        int left_sum = 0, right_sum = 0;
        int i;
        
        // Calculate sum from 1 to x (inclusive)
        for (i = 1; i <= x; i++) {
            left_sum += i;
        }
        
        // Calculate sum from x to n (inclusive)
        for (i = x; i <= n; i++) {
            right_sum += i;
        }
        
        printf("x = %d: sum(1 to %d) = %d, sum(%d to %d) = %d\n", 
               x, x, left_sum, x, n, right_sum);
        
        if (left_sum == right_sum) {
            pivot = x;
            break;
        }
    }
    
    printf("Pivot integer: %d\n", pivot);
    
    return 0;
}

// Follow-up 1: O(log n) solution using binary search
/*
int isPivot(int x, int n) {
    long long left_sum = (long long)x * (x + 1) / 2;
    long long right_sum = (long long)n * (n + 1) / 2 - (long long)(x - 1) * x / 2;
    return left_sum == right_sum;
}

int findPivotBinary(int n) {
    int left = 1, right = n;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (isPivot(mid, n)) {
            return mid;
        }
        long long left_sum = (long long)mid * (mid + 1) / 2;
        long long right_sum = (long long)n * (n + 1) / 2 - (long long)(mid - 1) * mid / 2;
        if (left_sum < right_sum) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
*/

// Follow-up 2: O(1) solution using mathematical formula
/*
int findPivotConstant(int n) {
    // For pivot x: sum(1 to x) = sum(x to n)
    // x(x+1)/2 = n(n+1)/2 - (x-1)x/2
    // Solving: x = sqrt(n(n+1)/2)
    long long total = (long long)n * (n + 1) / 2;
    long long x = (long long)sqrt(total);
    
    if (x * x == total) {
        return (int)x;
    }
    return -1;
}
*/