#include <stdio.h>

//  Check if the elements on the diagonal of a matrix are distinct.

int main() {
    int a[10][10], i, j, n, flag = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i][i] == a[j][j]) {
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");
    return 0;
}
