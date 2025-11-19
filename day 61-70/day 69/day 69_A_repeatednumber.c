#include <stdio.h>

//  Write a program to take an integer array as input.
// Only one element will be repeated. Print the repeated element. 
// Try to find the result in one single iteration.

int main() {
    int i,n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (only one element is repeated): ", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int repeated = 0;
    for ( i = 0; i < n; i++) {
        repeated ^= arr[i];
    }
    for (i = 1; i <= n-1; i++) {
        repeated ^= i;
    }
    printf("Repeated element: %d\n", repeated);
    return 0;
}

