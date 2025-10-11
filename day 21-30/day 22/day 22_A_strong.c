#include <stdio.h>

// Write a program to check if a number is a strong number.

long long calculateFactorial(int n) {
    long long fact = 1;
    int i;
    for ( i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num, originalNum, remainder;
    long long sumOfFactorials = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; 
    while (num > 0) {
        remainder = num % 10; 
        sumOfFactorials += calculateFactorial(remainder); 
        num /= 10; 
    }
    if (sumOfFactorials == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }
    return 0;
}
