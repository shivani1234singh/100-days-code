#include <stdio.h>
#include <math.h> 

int main() {
    int num,temp,remainder,n = 0;
    double result=0.0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num; 
    for (;temp!=0;temp/=10) {
        n++;
    }
    temp = num; 
    for (;temp!=0;temp/=10) {
        remainder = temp % 10; 
        result += pow(remainder, n);   
    }
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
