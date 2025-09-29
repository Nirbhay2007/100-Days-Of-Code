//Q76: Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2 || n <= 0 || m <= 0) return 0;

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (n != m) {
        printf("Not symmetric\n");
        return 0;
    }

    int symmetric = 1;
    for (int i = 0; i < n && symmetric; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric) printf("Symmetric\n");
    else printf("Not symmetric\n");
    return 0;
}


