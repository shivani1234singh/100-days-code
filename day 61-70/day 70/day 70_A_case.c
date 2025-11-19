#include <stdio.h>

//  Write a program to take a string input. Change it to sentence case.
int main() {
	int i;
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - ('a' - 'A');
    }
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
    printf("Sentence case: %s", str);
    return 0;
}

