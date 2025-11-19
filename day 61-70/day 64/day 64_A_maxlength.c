#include <stdio.h>
#include <string.h>

//  Write a program to take a string s as input.
// The task is to find the length of the longest substring without repeating characters.
// Print the length as output.

int main() {
    char s[1000];  
    int n, i, j, k, maxLength = 0;
    printf("Enter the string:\n");
    scanf("%s", s);
    n = strlen(s);
    for (i = 0; i < n; i++) {
        int visited[256] = {0}; 
        for (j = i; j < n; j++) {
            if (visited[(int)s[j]] == 1) {
                break;
            } else {
                visited[(int)s[j]] = 1; 
            }
        }
        if (j - i > maxLength) {
            maxLength = j - i;
        }
    }
    printf("%d\n", maxLength);
    return 0;
}

