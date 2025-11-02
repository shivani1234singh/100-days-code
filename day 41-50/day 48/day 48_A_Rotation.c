#include <stdio.h>
#include <string.h>

//  Check if one string is a rotation of another.

int main() {
    char str1[100], str2[100];
    int len1, len2, i, j, k, isRotation;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if (len1 != len2) {
        printf("The strings are NOT rotations of each other.\n");
        return 0;
    }
    isRotation = 0;
    for (i = 0; i < len1; i++) {
        for (j = 0; j < len1; j++) {
            k = (i + j) % len1; 
            if (str1[k] != str2[j])
                break;
        }
        if (j == len1) {
            isRotation = 1;
            break;
        }
    }
    if (isRotation)
        printf("The strings are rotations of each other.\n");
    else
        printf("The strings are NOT rotations of each other.\n");
    return 0;
}

