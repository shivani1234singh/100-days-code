#include <stdio.h>

//  Check if a matrix is symmetric.

int main() {
    int a[10][10], i, j, n, Symmetric = 1;
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
            if(a[i][j] != a[j][i]) {
                Symmetric = 0;
                break;
            }
        }
    }
    if(Symmetric == 1)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");
    return 0;
}
