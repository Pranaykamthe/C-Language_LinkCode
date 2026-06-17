#include <stdio.h>

void print1ton(int start, int end) {
    for (int i = start; i <= end; i++) 
    {
        printf("%d ", i);
    }
}

int main() {
    print1ton(1, 10);
    printf("\nenter start and end: \n");
    int start, end;
    scanf("%d %d", &start, &end);
    print1ton(start, end);
    return 0;
}