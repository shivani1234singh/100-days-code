#include <stdio.h>

//  Store employee data in a binary file using fwrite() and read using fread().

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;
    FILE *file;
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joiningDate.day,
                     &emp.joiningDate.month,
                     &emp.joiningDate.year);

    file = fopen("employee.dat", "wb");  
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);
    printf("\nEmployee data written to file successfully.\n");

    file = fopen("employee.dat", "rb");  
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fread(&emp, sizeof(struct Employee), 1, file);
    fclose(file);

    printf("\n--- Employee Details from File ---\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);
    return 0;
}

