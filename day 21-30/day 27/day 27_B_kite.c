#include <stdio.h>

//Write a program to print the following pattern:

//   *
//  ***
// *****
//*******
// *****
//  ***
//   *

int main() {
    int i, j, space;
    int rows = 4; 
    for (i = 1; i <= 4; i++){
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = rows - 1; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
