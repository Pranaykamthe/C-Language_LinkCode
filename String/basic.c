#include <stdio.h>

int main() {
    char name[]= "ram";
    printf("%s\n", name);
    printf("%c\n", name[0]);
    name[0] = 'p';
    printf("%s\n", name);

    int len= sizeof(name) / sizeof(name[0]);
    printf("%d\n", len);

    printf("%c\n", name[3]);

    for (int i = 0; i < len; i++) {
        printf("%c\n", name[i]);
    }

    return 0;
}