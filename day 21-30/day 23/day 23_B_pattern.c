#include <stdio.h>

//  Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****

int main() {
	int n=5,i,j;
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("*");
        }
    printf("\n");
   	}
    return 0;
}
