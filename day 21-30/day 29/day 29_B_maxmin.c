#include <stdio.h>

//Find the maximum and minimum element in an array.

int main() {
    int arr[] = {12, 5, 89, 34, 7, 61, 23};
	int i; 
    int n = sizeof(arr) / sizeof(arr[0]);  
    if (n == 0) {
        printf("The array is empty.\n");
        return 1; 
    }
    int max = arr[0]; 
    int min = arr[0]; 
    for ( i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    return 0;
}
