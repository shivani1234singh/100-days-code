#include <stdio.h>

//  Perform diagonal traversal of a matrix.

int main() {
    int a[10][10], b[10][10];
    int n, i, j;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            b[j][i] = a[i][j];
        }
    }
    printf("Transposed matrix is:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
