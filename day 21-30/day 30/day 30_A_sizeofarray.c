#include <stdio.h>

//Count even and odd numbers in an array.

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);        
    int i, even = 0 , odd =0;
    for ( i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { 
            even++;
        } else {
            odd++;
        }
    }
    printf("Total Even numbers: %d\n", even);
    printf("Total Odd numbers: %d\n", odd);
    return 0;
}
