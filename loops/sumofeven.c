#include <stdio.h>
int main() {
    int sum = 0, a = 1, n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(a <= n) {

        if(a % 2 == 0) {
            sum += a;
        }
        a++;
    }

    printf("Sum of first %d even numbers is %d\n", n, sum);

    return 0;
}