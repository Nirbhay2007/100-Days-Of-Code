//Q69: Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input\n");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int first = arr[0], second = arr[1];
    if (first < second) {
        int tmp = first; first = second; second = tmp;
    }
    for (int i = 2; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == first) printf("No second largest\n");
    else printf("%d\n", second);
    return 0;
}
