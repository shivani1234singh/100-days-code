#include <stdio.h>

//  Use pointer to struct to modify and display data using -> operator.

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s;      
    struct Student *ptr;    

    ptr = &s;
    ptr->roll = 10;
    ptr->marks = 88.5;

    printf("Student Roll Number: %d\n", ptr->roll);
    printf("Student Marks: %.2f\n", ptr->marks);
    return 0;
}

