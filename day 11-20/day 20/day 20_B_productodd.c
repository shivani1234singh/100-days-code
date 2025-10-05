#include <stdio.h>

//  Write a program to find the 1’s complement of a binary number and print it.


int main() {
    int number, digit;
    long long productOfOddDigits = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number == 0) {
        printf("The number 0 has no odd digits. Product is 1 (multiplicative identity).\n");
        return 0;
    }
    while (number > 0) {
        digit = number % 10;
        if (digit % 2 != 0) {
            productOfOddDigits *= digit; 
        }
        number /= 10;
    }
    printf("The product of odd digits is: %lld\n", productOfOddDigits);
    return 0;
}
