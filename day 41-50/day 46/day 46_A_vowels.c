#include <stdio.h>

//  remove all vowels from a string.

int main() {
    char str[100], newStr[100];
    int i, j = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);  
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
           str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            newStr[j] = str[i];  
            j++;
        }
    }
    newStr[j] = '\0';  
    printf("String without vowels: %s\n", newStr);
    return 0;
}

