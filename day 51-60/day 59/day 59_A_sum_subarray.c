#include <stdio.h>

//  Write a program to take an integer array arr and an integer k as inputs.
// Print the maximum sum of all the subarrays of size k.

int main() {
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter subarray size k: ");
    scanf("%d", &k);
    if (k > n || k <= 0) {
        printf("Invalid subarray size\n");
        return 0;
    }
    int maxSum = 0, currentSum = 0;
    for (i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;
    for (i = k; i < n; i++) {
        currentSum = currentSum + arr[i] - arr[i - k];   
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    printf("%d\n", maxSum);
    return 0;
}

