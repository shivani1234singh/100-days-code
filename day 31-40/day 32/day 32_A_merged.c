#include <stdio.h>

//  Merge two arrays.

int main() {
    int array1[] = {1, 2, 3};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int array2[] = {4, 5, 6, 7};
    int size2 = sizeof(array2) / sizeof(array2[0]); 
    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];
    int i;
    for (i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }
    for ( i = 0; i < size2; i++) {
        mergedArray[size1 + i] = array2[i];
    }
    printf("Merged Array: ");
    for (i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");
    return 0;
}
