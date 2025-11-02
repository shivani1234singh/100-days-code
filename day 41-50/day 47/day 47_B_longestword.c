#include <stdio.h>

//  Find the longest word in a sentence.

int main() {
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);  
    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0; 
        }
        if (str[i] == '\0')
            break;
        i++;
    }
    printf("The longest word is: %s\n", longest);
    return 0;
}

