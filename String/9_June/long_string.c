#include <stdio.h>
#include <string.h>

int main() {
    char fname[50];
    printf("Enter your name: ");
    // scanf("%s", fname);
    // fgets(fname, sizeof(fname), stdin);

    fgets(fname, sizeof(fname), stdin);

    printf("%s", fname);
    int len = strlen(fname);
    printf("%d\n", len);


    return 0;
}