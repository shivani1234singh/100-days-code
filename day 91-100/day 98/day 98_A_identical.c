#include <stdio.h>
#include <string.h>

//  Take two structs as input and check if they are identical.

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

int areIdentical(struct Employee e1, struct Employee e2) {
    if (e1.id != e2.id) return 0;
    if (strcmp(e1.name, e2.name) != 0) return 0;
    if (e1.salary != e2.salary) return 0;
    if (e1.joiningDate.day != e2.joiningDate.day) return 0;
    if (e1.joiningDate.month != e2.joiningDate.month) return 0;
    if (e1.joiningDate.year != e2.joiningDate.year) return 0;
    return 1;  
}
int main() {
    struct Employee e1, e2;

    printf("Enter details for Employee 1 (id name salary dd mm yyyy): ");
    scanf("%d %s %f %d %d %d", &e1.id, e1.name, &e1.salary,
          &e1.joiningDate.day, &e1.joiningDate.month, &e1.joiningDate.year);

    printf("Enter details for Employee 2 (id name salary dd mm yyyy): ");
    scanf("%d %s %f %d %d %d", &e2.id, e2.name, &e2.salary,
          &e2.joiningDate.day, &e2.joiningDate.month, &e2.joiningDate.year);

    if (areIdentical(e1, e2))
        printf("\nEmployees are identical.\n");
    else
        printf("\nEmployees are not identical.\n");
    return 0;
}

