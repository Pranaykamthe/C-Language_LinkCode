#include <stdio.h>

int main() {

    int arr[] = {23, 25, 22, 40, 21};

    printf("Elements in array: ");

    for(int i = 0; i < 5; i++) {

        if(arr[i] % 2 != 0) {

            printf("%d ", arr[i]);
        }
    }

    return 0;
}