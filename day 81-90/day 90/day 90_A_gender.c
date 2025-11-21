#include <stdio.h>

// Define a struct with enum Gender and print person's gender.

enum Gender {
    MALE,
    FEMALE,
    OTHER
};
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p1;
    printf("Enter name: ");
    scanf("%s", p1.name);
    printf("Enter age: ");
    scanf("%d", &p1.age);
    int g;
    printf("Enter gender (0=Male, 1=Female, 2=Other): ");
    scanf("%d", &g);
    p1.gender = (enum Gender)g;
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    printf("Gender: ");
    if (p1.gender == MALE)
        printf("Male\n");
    else if (p1.gender == FEMALE)
        printf("Female\n");
    else if (p1.gender == OTHER)
        printf("Other\n");
    else
        printf("Invalid Gender\n");
    return 0;
}

