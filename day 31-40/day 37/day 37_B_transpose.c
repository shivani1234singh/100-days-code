#include <stdio.h>

//  Find the transpose of a matrix.

int main() {
    int i,j,m,n;
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &m, &n);
    int matrix[m][n]; 
    int transpose[n][m]; 
    printf("Enter the elements of the matrix:\n");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nOriginal Matrix:\n");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nTransposed Matrix:\n");
    for ( i = 0; i < n; i++) { 
        for ( j = 0; j < m; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
