#include <stdio.h>

//Write a program to print all the prime numbers from 1 to n.

int main() {
    int n, i, j, prime;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are: ", n);
    for (i = 2; i <= n; i++) {
        prime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;        
            }
        }
        if (prime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0; 
}
