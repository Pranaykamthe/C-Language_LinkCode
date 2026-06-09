#include <stdio.h>

int main() {
    int arr[3][3] = {{21, 51, 61},
                     {22, 52, 62},
                     {23, 53, 63}};
    
    // int size = sizeof(arr) / sizeof(arr[0][0]); for 1d array

    //sum of all elements in 2d array
    // int sum = 0;
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         sum += arr[i][j];
    //     }
    // }
    // printf("Sum of all elements: %d\n", sum);


    //rows sum of 2d array
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d: %d\n", i, sum);
    }

    return 0;

}