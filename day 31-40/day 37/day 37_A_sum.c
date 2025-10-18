#include <stdio.h>

//  Find the sum of each row of a matrix and store it in an array.

int main() {
    int i,j, rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    int rowSums[rows];
    printf("Enter the elements of the matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
}
    for ( i = 0; i < rows; i++) {
        int currentSum = 0;
        for ( j = 0; j < cols; j++) {
            currentSum += matrix[i][j];
        }
        rowSums[i] = currentSum; 
    }
    printf("\nSum of each row:\n");
    for ( i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i + 1, rowSums[i]);
    }
    return 0;
}
