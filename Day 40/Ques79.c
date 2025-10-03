//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nMatrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nDiagonal Traversal:\n");
    
    for (int k = 0; k < cols; k++) {
        printf("Diagonal starting from [0][%d]: ", k);
        i = 0;
        j = k;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
    
    for (int k = 1; k < rows; k++) {
        printf("Diagonal starting from [%d][%d]: ", k, cols-1);
        i = k;
        j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
    
    return 0;
}