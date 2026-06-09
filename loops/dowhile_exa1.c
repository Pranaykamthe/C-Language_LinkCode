#include <stdio.h>

int main() {
    
    // int i = 1;
    // // The do-while loop example will print all even numbers from 1 to 10
    // do {
    //     if(i%2 == 0) {
    //         printf("%d is even\n", i);
    //     }
    //     i++;
    // } while (i <= 10);



    // int i = 10;
    // // The do-while loop example will print all numbers from 10 to 1
    // do{
    //     printf("%d\n ", i);
    //     i--;
    // } while (i >= 1);


    // int i = 1;
    // // The do-while loop example will print all numbers from 1 to 10
    // do{
    //     printf("%d = %d\n ", i, i*i);
    //     i++;
    // } while (i <= 10);



    int i = 1;
    // The do-while loop example will print all factors of a given number
    printf("enter no to find factors: ");
    int num;
    scanf("%d", &num);
    do{
        if(num%i == 0) {
            printf("%d is a factor of %d\n", i, num);
        }
        i++;
    } while (i <= num);

    return 0;
}