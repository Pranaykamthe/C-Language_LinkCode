#include <stdio.h>

int main() {

    int n = 4;

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n; j++) {

            if(i == j || i + j == 5) {

                // center positions
                if((i == 2 && j == 2) ||
                   (i == 3 && j == 3) ||
                   (i == 2 && j == 3) ||
                   (i == 3 && j == 2))
                {

                    printf("0 ");
                }

                else {

                    printf("1 ");
                }
            }

            else {

                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}