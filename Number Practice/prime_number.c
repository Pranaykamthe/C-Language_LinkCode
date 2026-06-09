#include <stdio.h>

int main() {
    int num, a=2, flag=1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (a<=num/2)
    {
        if (num%a==0)
        {
            flag=0;
            break;
        }
        a++;
    }
    if (flag==1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}