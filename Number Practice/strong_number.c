#include <stdio.h>

int main() {

    int num, temp, digit, sum = 0;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store original number
    temp = num;

    // Loop until number becomes 0
    while(num > 0) {

        // Fetch last digit
        digit = num % 10;

        // Variable to store factorial
        int fact = 1;

        // Store digit in another variable
        int d = digit;

        // Find factorial of digit
        while(d > 0) {

            fact = fact * d;

            d--;
        }

        // Add factorial to sum
        sum = sum + fact;

        // Remove last digit
        num = num / 10;
    }

    // Check Strong Number condition
    if(sum == temp)
        printf("%d is a Strong Number", temp);
    else
        printf("%d is not a Strong Number", temp);

    return 0;
}