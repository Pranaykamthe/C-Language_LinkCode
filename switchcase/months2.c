#include <stdio.h>

int main() {

    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month) {

        // 31 days
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days");
            break;

        // 30 days
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days");
            break;

        // February
        case 2:
            printf("28 days");
            break;

        default:
            printf("Invalid month number");
    }

    return 0;
}