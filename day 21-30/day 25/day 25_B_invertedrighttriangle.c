#include <stdio.h>

// Write a program to print the following pattern:
//*****
//****
//  ***
//   **
//    *

int main() {
    int i, j, k;

    for (i = 5; i >= 1; i--) {
        for (k = 5; k > i; k--) {
            printf(" ");  
        }
        for (j = 1; j <= i; j++) {
            printf("*");  
        }
        printf("\n");
    }

    return 0;
}
