#include <stdio.h>

int main() {

    int ch;

    printf("-----MongoDB Atlas-----\n");
    printf("1. Login\n");
    printf("2. SignUp\n");

    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch(ch) {

        case 1:
            printf("Enter username and password");
            break;

        case 2:
            printf("Registration form....");
            break;

        default:
            printf("Invalid choice....Please Enter valid choice!");
    }

    return 0;
}