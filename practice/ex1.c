#include <stdio.h>

int main() {
    int num, sum=0, cube=0, temp, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;

    while (temp !=0) {
        remainder = temp % 10;
        sum = sum + remainder;
        cube = cube + remainder * remainder * remainder;
        temp = temp / 10;
    }
    if (sum == cube)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}