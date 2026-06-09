#include <stdio.h>

int main() {
    int arr[3][3] = {{21, 51, 61},
                     {22, 52, 62},
                     {23, 53, 63}};

    // convert odd numbers to 1 and even numbers to 0
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] % 2 == 0) {
                arr[i][j] = 0;
            } else {
                arr[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

return 0;
}