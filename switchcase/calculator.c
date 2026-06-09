#include <stdio.h>

int main() {

    int num1, num2;
    char sym;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter the symbol of the operation you want to perform (+, -, *, /): ");
    scanf(" %c", &sym);

    switch(sym) {

        case '+':

            printf("%d + %d = %d", num1, num2, num1 + num2);
            break;

        case '-':

            if(num1 > num2)
                printf("%d - %d = %d", num1, num2, num1 - num2);
            else
                printf("%d - %d = %d", num2, num1, num2 - num1);

            break;

        case '*':

            printf("%d * %d = %d", num1, num2, num1 * num2);
            break;

        case '/':

            if(num1 == 0 || num2 == 0) {

                printf("Error: Division by zero is not allowed.");
            }

            else {

                if(num1 > num2)
                    printf("%d / %d = %.2f", num1, num2, (float)num1 / num2);
                else
                    printf("%d / %d = %.2f", num2, num1, (float)num2 / num1);
            }

            break;

        default:

            printf("Invalid operator");
    }

    return 0;
}