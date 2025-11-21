#include <stdio.h>

//  Create an enum for months and print how many days each month has.

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {

    int m;       
    printf("Enter month number (1-12): ");
    scanf("%d", &m);

    if (m == JAN)        printf("January has 31 days.\n");
    else if (m == FEB)   printf("February has 28 or 29 days.\n");
    else if (m == MAR)   printf("March has 31 days.\n");
    else if (m == APR)   printf("April has 30 days.\n");
    else if (m == MAY)   printf("May has 31 days.\n");
    else if (m == JUN)   printf("June has 30 days.\n");
    else if (m == JUL)   printf("July has 31 days.\n");
    else if (m == AUG)   printf("August has 31 days.\n");
    else if (m == SEP)   printf("September has 30 days.\n");
    else if (m == OCT)   printf("October has 31 days.\n");
    else if (m == NOV)   printf("November has 30 days.\n");
    else if (m == DEC)   printf("December has 31 days.\n");
    else                 printf("Invalid month!\n");

    return 0;
}

