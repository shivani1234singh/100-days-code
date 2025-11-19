#include <stdio.h>

//  Write a program to take an input array of size n.
// The array should contain all the integers between 0 to n except for one. 
//Print that missing number

int main() {
    int i,n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    int arr[n-1];  
    printf("Enter %d elements (from 0 to %d with one missing): ", n-1, n);
    for (i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }
    int total = n * (n + 1) / 2;
    int sum = 0;
    for ( i = 0; i < n-1; i++) {
        sum += arr[i];
    }
    int missing = total - sum;
    printf("Missing number: %d\n", missing);
    return 0;
}

