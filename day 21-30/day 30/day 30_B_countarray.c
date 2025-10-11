#include <stdio.h>

//Count positive, negative, and zero elements in an array.

int main() {
    int arr[] = {10, -5, 0, 45, -20, 0, 7, -1}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int i,positive=0,negative=0,zero=0;
    for ( i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++; 
        } else {
            zero++; 
        }
    }
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Zeroes: %d\n", zero);
    return 0;
}
