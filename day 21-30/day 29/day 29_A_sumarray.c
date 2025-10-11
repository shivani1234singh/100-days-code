#include <stdio.h>

//Find the sum of array elements.

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i,sum = 0;
    for ( i = 0; i < n; i++) {
        sum += arr[i]; 
    }
    printf("The sum of array elements is: %d\n", sum);
    return 0;
}
