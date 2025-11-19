#include <stdio.h>

//  Store multiple student records (name, roll number, marks) into a file using fprintf(). 
// Then read them using fscanf() and display each record.

int main() {
    FILE *file;
    int n, i;
    char name[50];
    int roll;
    float marks;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%f", &marks);
        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(file);
    printf("\nStudent records saved to students.txt\n");
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    printf("\nStudent Records:\n");
    printf("----------------------------\n");
    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }
    fclose(file);
    return 0;
}

