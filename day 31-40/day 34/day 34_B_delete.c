#include <stdio.h>

//  Delete an element from an array.

int main() {
    int arr[100] , size,position,i;        
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position (index) of the element to delete (0 to %d): ", size - 1);
    scanf("%d", &position);
        for (i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    return 0;
}
