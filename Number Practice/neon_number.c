#include <stdio.h>

int main() {

    int num, square, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    while(square > 0) {

        digit = square % 10;
        sum = sum + digit;
        square = square / 10;
    }

    if(sum == num)
        printf("%d is a Neon Number", num);
    else
        printf("%d is not a Neon Number", num);

    return 0;
}