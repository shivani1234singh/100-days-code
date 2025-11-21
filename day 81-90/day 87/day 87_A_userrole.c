#include <stdio.h>

//  Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

enum UserRole {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    int input;
    enum UserRole role;

    printf("Select your role:\n");
    printf("1. Admin\n");
    printf("2. User\n");
    printf("3. Guest\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &input);

    role = (enum UserRole)input;

    if (role == ADMIN) {
        printf("Welcome, Admin! You have full access.\n");
    }
    else if (role == USER) {
        printf("Welcome, User! You have limited access.\n");
    }
    else if (role == GUEST) {
        printf("Welcome, Guest! You have minimal access.\n");
    }
    else {
        printf("Invalid role selected!\n");
    }

    return 0;
}

