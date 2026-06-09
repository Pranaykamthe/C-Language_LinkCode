#include <stdio.h>
int main() {
    int sum = 0, a = 1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(a <= n) {

        if(a % 2 == 1) {
            sum += a;
        }
        a++;
    }

    printf("Sum of first %d odd numbers is %d\n", n, sum);

    return 0;
}