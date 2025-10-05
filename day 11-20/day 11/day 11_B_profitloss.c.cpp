#include <stdio.h>

//   Write a program to find profit or loss percentage given cost price and selling price.


int main() {
    float cp,sp,amount,percentage;
    printf("Enter the Cost Price: ");
    scanf("%f", &cp);

    printf("Enter the Selling Price: ");
    scanf("%f", &sp);
	amount = sp - cp;
    if (amount > 0) {
        percentage = (amount / cp) * 100;
        printf("Profit: %.2f\n",amount);
        printf("profit Percentage: %.2f%%\n", percentage);
    } else if (amount < 0) {
        percentage = (-amount / cp) * 100;  
        printf("Loss: %.2f\n", -amount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
