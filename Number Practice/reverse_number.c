#include <stdio.h>

int main() {
    int num, rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Original number: %d\n", num);

    while (num != 0) {
        int digit = num % 10; // Get the last digit
        rev = rev * 10 + digit; // Append the digit to the reversed number
        num = num / 10; // Remove the last digit
    }

    printf("Reversed number: %d\n", rev);
    return 0;
}