#include <stdio.h>

int main() {
    // int num, originalNum, sum = 0;

    // printf("Enter an integer: ");
    // scanf("%d", &num);

    // originalNum = num;

    // while (originalNum != 0) {
    //     int digit = originalNum % 10;
    //     sum = sum + (digit * digit * digit);
    //     originalNum /= 10;
    // }

    // if (sum == num)
    //     printf("%d is an Armstrong number.\n", num);
    // else
    //     printf("%d is not an Armstrong number.\n", num);

    int num, count=0, sum=0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int temp=num;
    
    // 1. Count the number of digits
    while (num>0)
    {
        count++;
        num=num/10;
    }
    printf("Number of digits: %d\n", count);
    num=temp;
    // 2. Fetch a digit
    while (num>0)
    {
        int digit=num%10;
        
        int a=1, pow=1;
        // 3. find the power of the digit
        while (a<=count)
        {
            pow=pow*digit;
            a++;
        }

        // 4. add the power to the sum
        sum=sum+pow;
        num=num/10;
    }
    // 5. check if the sum is equal to the original number
    if (sum==temp)
        printf("%d is an Armstrong number.\n", temp);
    else
        printf("%d is not an Armstrong number.\n", temp);


    return 0;
}