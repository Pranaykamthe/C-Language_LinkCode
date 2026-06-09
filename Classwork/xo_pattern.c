#include <stdio.h>

int main() {
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if((i + j) % 2 == 0) {
                printf("X ");
            } else {
                printf("O ");
            }
        }
        printf("\n");
    }

    return 0;
}