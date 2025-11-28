#include <stdio.h>

//   Write a function that accepts a structure as parameter and prints its members.

struct Student {
    int roll;
    char name[50];
    float marks;
};

void printStudent(struct Student s) {
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}
int main() {
    struct Student s1;
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printStudent(s1);
    return 0;
}

