//Q77: Check if the elements on the main diagonal are distinct.
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

    int diagCount = n < m ? n : m; // length of main diagonal
    int distinct = 1;

    for (int i = 0; i < diagCount && distinct; i++) {
        for (int j = i + 1; j < diagCount; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct) printf("Distinct\n");
    else printf("Not distinct\n");
    return 0;
}


