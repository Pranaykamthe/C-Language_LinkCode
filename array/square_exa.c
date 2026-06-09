#include <stdio.h>

int main() {

    int arr[] = {23, 25, 22, 40, 21};

    int sum = 0;

    printf("Numbers divisible by 5 and their squares:\n");

    for(int i = 0; i < 5; i++) {

        if(arr[i] % 5 == 0) {

            int square = arr[i] * arr[i];

            printf("%d^2 = %d\n", arr[i], square);

            sum = sum + square;
        }
    }

    printf("Sum = %d", sum);

    return 0;
}