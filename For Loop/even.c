#include <stdio.h>

int main() {
    int i;
    int count = 0;

    printf("Even numbers from 12 to 45 and their count:\n");
    for (i = 12; i <= 45; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nCount of even numbers: %d\n", count);
    return 0;
}