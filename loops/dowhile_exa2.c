#include <stdio.h>

int main()
{
    int i = 1;

    printf("Enter no to check it is perfect or not?\n");

    int num;
    scanf("%d", &num);

    int sum = 0;

    do
    {
        if (num % i == 0)
        {
            sum += i;
        }

        i++;

    } while (i < num);

    if (num == sum)
    {
        printf("perfect");
    }
    else
    {
        printf("not perfect");
    }

    return 0;
}