#include <stdio.h>

//  Write a program to find the LCM of two numbers.

int main() {
    int a,b,lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a,&b);
    lcm = (a > b) ? a : b;
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("The LCM of %d and %d is %d.\n", a,b,lcm);
            break; 
        }
        ++lcm;
    }
    return 0;
}
