#include <stdio.h>

//  Write a program to print the sum of the first n odd numbers.


int main() {
    int n, i, sum = 0;
    printf("Enter the number of odd terms (n): ");
    scanf("%d", &n);
    sum = n * n;
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}
