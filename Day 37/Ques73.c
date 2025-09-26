//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) return 0;
    
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int rowSums[rows];
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }
    
    for (int i = 0; i < rows; i++) {
        if (i) printf(" ");
        printf("%d", rowSums[i]);
    }
    printf("\n");
    return 0;
}
