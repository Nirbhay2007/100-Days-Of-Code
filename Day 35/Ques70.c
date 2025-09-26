//Q70: Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    if (scanf("%d", &k) != 1) return 0;
    
    k = k % n; // handle k >= n
    if (k < 0) k += n; // handle negative k
    
    // reverse entire array
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
    }
    // reverse first k elements
    for (int i = 0, j = k - 1; i < j; i++, j--) {
        int tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
    }
    // reverse remaining elements
    for (int i = k, j = n - 1; i < j; i++, j--) {
        int tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
    }
    
    for (int i = 0; i < n; i++) {
        if (i) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
