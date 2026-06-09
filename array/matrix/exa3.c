#include <stdio.h>

// Program to find the sum of diagonal elements of a matrix
int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum1 = 0, sum2 = 0;
    // Loop to calculate the sum of diagonal elements

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (i==j)
            {
                sum1 = sum1 + matrix[i][j];
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    printf("Sum of diagonal elements : %d\n", sum1);
    printf("Sum of diagonal elements : %d\n", sum2);
    return 0;
}