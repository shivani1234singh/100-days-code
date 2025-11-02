#include <stdio.h>

//  Print initials of a name with the surname displayed in full.

int main() {
    char name[100];
    int i, lastSpaceIndex = -1;
    printf("Enter your full name: ");
    scanf("%[^\n]", name);  
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpaceIndex = i;
    }
    for (i = 0; i <= lastSpaceIndex; i++) {
        if (i == 0 && name[i] != ' ')
            printf("%c", name[i]); 
        else if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c", name[i + 1]);  
    }
    if (lastSpaceIndex != -1)
        printf(" ");
    for (i = lastSpaceIndex + 1; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");
    return 0;
}

