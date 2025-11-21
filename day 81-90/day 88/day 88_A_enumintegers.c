#include <stdio.h>

//  Print all enum names and integer values using a loop.

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    
    const char *monthNames[] = {
        "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    int i;
    printf("Month names and their enum values:\n");
    for (i = JAN; i <= DEC; i++) {
        printf("%s = %d\n", monthNames[i - 1], i);
    }

    return 0;
}

