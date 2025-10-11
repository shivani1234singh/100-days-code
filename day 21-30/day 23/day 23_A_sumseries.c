#include <stdio.h>

//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.


int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of terms must be a positive integer.\n");
        return 1; 
    }
    for (i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;
        denominator += 4;
    }
    printf("The sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}
