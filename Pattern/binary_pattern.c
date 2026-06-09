#include <stdio.h>
// (1111
// 0000
// 1111
// 0000)
int main() {
    int n;
    printf("Enter the size of the pattern: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}