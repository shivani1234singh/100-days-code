#include <stdio.h>

// Write a program to print the product of even numbers from 1 to n.


int main() {
    int n,i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for( i = 2; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of even numbers from 1 to %d = %d\n", n, sum);
    return 0;
}
