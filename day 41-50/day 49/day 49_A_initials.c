#include <stdio.h>

//  print the initials of a name.

int main() {
    char name[100];
    int i;
    printf("Enter your full name: ");
    scanf("%[^\n]", name); 
    if (name[0] != ' ')
        printf("%c", name[0]);
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c", name[i + 1]);
        }
    }
    printf("\n");
    return 0;
}

