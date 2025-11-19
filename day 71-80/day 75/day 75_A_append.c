#include <stdio.h>

//  Open an existing file in append mode and allow the user to enter a new line of text.
// Append the text at the end without overwriting existing content.

int main() {
    char filename[100];
    char text[1000];
    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar(); 
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    fprintf(file, "%s", text);
    printf("Text appended successfully!\n");
    fclose(file);
    return 0;
}

