#include <stdio.h>
int main() {
    int a=1,n;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (a<=n)
    {
        printf("%d ", n);
        n--;
    }
    
    return 0;
}