#include <stdio.h>

//  Insert an element in a sorted array at the appropriate position.

int main() {
    int arr[100];
    int newElement,i,n,position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d:\n ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d", &newElement);
    position = 0;
    while (position < n && arr[position] < newElement) {
        position++;
    }
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = newElement;
    n++; 
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
