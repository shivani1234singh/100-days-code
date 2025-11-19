#include <stdio.h>

//  Read a text file and count the total number of characters, words, and lines.
// A word is defined as a sequence of non-space characters separated by spaces or newlines.
int main() {
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0; 
    while ((ch = fgetc(file)) != EOF) {
        characters++; 
        if (ch == '\n') {
            lines++; 
        }
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0; 
        } else if (inWord == 0) {
            inWord = 1; 
            words++;
        }
    }
    fclose(file);
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    return 0;
}

