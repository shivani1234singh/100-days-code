#include <stdio.h>

//  Show that enums store integers by printing assigned values.

enum Status {
    SUCCESS = 1,
    FAILURE = 5,
    TIMEOUT = 10
};

int main() {
    enum Status s;

    s = SUCCESS;
    printf("SUCCESS = %d\n", s);

    s = FAILURE;
    printf("FAILURE = %d\n", s);

    s = TIMEOUT;
    printf("TIMEOUT = %d\n", s);

    return 0;
}

