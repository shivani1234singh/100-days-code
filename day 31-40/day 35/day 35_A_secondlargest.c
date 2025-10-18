#include <stdio.h>

//  Find the second largest element in an array.

int main() {
    int n, i, largest, second;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    largest = second = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } 
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    printf("Second largest element = %d", second);
    return 0;
}
