#include <stdio.h>

//  Read a text file and count how many vowels and consonants are in the file. 
// Ignore digits and special characters.

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;
    printf("Enter the filename: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }
    fclose(file);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}

