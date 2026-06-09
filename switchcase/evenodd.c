#include <stdio.h>

int main() {

    int num;

    printf("Enter number to check whether it is even or odd: ");
    scanf("%d", &num);

    switch(num % 2) {

        case 0:
            printf("%d is Even", num);
            break;

        default:
            printf("%d is Odd", num);
    }

    return 0;
}