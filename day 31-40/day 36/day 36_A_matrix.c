#include <stdio.h>

//  Read and print a matrix.

int main() {
    int i ,j ,rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols]; 
    printf("\nEnter the elements of the matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe entered matrix is:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]); 
        }
        printf("\n"); 
    }
    return 0;
}
