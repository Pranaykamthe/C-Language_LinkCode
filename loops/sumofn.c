#include <stdio.h>

int main() {

    int sum = 0, a = 1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(a <= n) {

        sum += a;
        a++;
    }

    printf("Sum of first %d natural numbers is %d\n", n, sum);

    return 0;
}