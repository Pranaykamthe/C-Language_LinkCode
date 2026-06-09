#include <stdio.h>

int main() {

    int num = 1, a = 1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(a <= n) {

        num *= a;
        a++;
    }

    printf("Factorial of %d is %d\n", n, num);

    return 0;
}