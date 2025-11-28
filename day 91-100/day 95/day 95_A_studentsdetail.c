#include <stdio.h>

//  Return a structure containing top student's details from a function.

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student getTopStudent(struct Student s1, struct Student s2, struct Student s3) {
    struct Student top = s1;
    if (s2.marks > top.marks)
        top = s2;
    if (s3.marks > top.marks)
        top = s3;
    return top;  
}

int main() {
    struct Student s1, s2, s3, top;
    printf("Enter details for Student 1 (roll name marks): ");
    scanf("%d %s %f", &s1.roll, s1.name, &s1.marks);
    printf("Enter details for Student 2 (roll name marks): ");
    scanf("%d %s %f", &s2.roll, s2.name, &s2.marks);
    printf("Enter details for Student 3 (roll name marks): ");
    scanf("%d %s %f", &s3.roll, s3.name, &s3.marks);
    top = getTopStudent(s1, s2, s3);
    printf("\nTop Student:\n");
    printf("Roll: %d\n", top.roll);
    printf("Name: %s\n", top.name);
    printf("Marks: %.2f\n", top.marks);
    return 0;
}

