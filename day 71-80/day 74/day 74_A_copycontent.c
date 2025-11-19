#include <stdio.h>

//  Take two filenames from the user – a source file and a destination file.
// Copy all the content from the source file to the destination file using fgetc() and fputc().

int main() {
    char sourceFile[100], destFile[100];
    FILE *source, *dest;
    char ch;
    printf("Enter source file name: ");
    scanf("%s", sourceFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not open destination file.\n");
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    printf("File copied successfully!\n");
    fclose(source);
    fclose(dest);
    return 0;
}

