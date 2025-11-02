#include <stdio.h>

//  Find the first repeating lowercase alphabet in a string.

int main() {
    char str[100];
    int freq[26] = {0};  
    int i;
    char result = '\0';
    printf("Enter a string: ");
    scanf("%s", str);  
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { 
            int index = str[i] - 'a';
            freq[index]++;
            if (freq[index] == 2) {  
                result = str[i];
                break;
            }
        }
    }
    if (result)
        printf("First repeating lowercase alphabet: %c\n", result);
    else
        printf("No repeating lowercase alphabet found.\n");
    return 0;
}

