#include <stdio.h>
int main() {
    // printf("Enter count: \n");
    // int n;
    // scanf("%d", &n);
    // for(int i=1; i<=n; i++) 
    // {
    //     for(int j=1; j<=n; j++) 
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    printf("Enter count: \n");
    int n;
    int num = 1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) 
    {
        for(int j=1; j<=n; j++) 
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}