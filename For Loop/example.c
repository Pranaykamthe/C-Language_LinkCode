#include <stdio.h>


int main() {

    // 51 - 100 = /3  sum=?

    // int i;
    // int sum = 0;

    // printf("Numbers from 51 to 100 that are divisible by 3:\n");
    // for (i = 51; i <= 100; i++) {
    //     if (i % 3 == 0) {
    //         printf("%d ", i);
    //         sum += i;
    //     }
    // }
    // printf("\nSum of numbers divisible by 3 from 51 to 100: %d\n", sum);
    
    

    // 1 - 100 = %4 with sum,   %7 with sub   %9 with factorial  count=?

    int sum1 = 0,sub = 0,sum2 = 0;

    int count = 0;  

    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 4 == 0) {
            sum1 += i;
        }
        if (i % 7 == 0) {
            sub -= i;
            }
        if (i % 9 == 0) {
            int j, factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        sum2 += factorial;
        }
    }
    count = sum1 + sub + sum2;

    printf("Sum of numbers divisible by 4: %d\n", sum1);
    printf("Subtraction of numbers divisible by 7: %d\n", sub);
    printf("Sum of factorials of numbers divisible by 9: %d\n", sum2);
    printf("Total count: %d\n", count);

    return 0;
}