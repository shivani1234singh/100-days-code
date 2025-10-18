#include <stdio.h>

//  Find the digit that occurs the most times in an integer number.

int main() {
    int num ,i; 
    printf("Enter an integer number: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    if (num == 0) {
        printf("The most frequent digit is: 0\n");
        return 0;
    }
    int digitcounts[10] = {0}; 
    int maxfrequency = 0;
    int mostfrequentdigit = 0;
    while (num > 0) {
        int digit = num % 10; 
        digitcounts[digit]++; 
        num /= 10;           
    }
    for ( i = 0; i < 10; i++) {
        if (digitcounts[i] > maxfrequency) {
            maxfrequency = digitcounts[i];
            mostfrequentdigit = i;
        }
    }
    printf("The most frequent digit is: %d\n", mostfrequentdigit);
    return 0;
}
