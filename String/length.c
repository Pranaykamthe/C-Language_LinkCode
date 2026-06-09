#include <stdio.h>

int main() {
    char name[] = "ram";
    int len=strlen(name);
    printf("%d\n", len);

    // count len of string without inbuilt function
    int count=0;
    int i=0;
    while(name[i] != '\0') // r!=0t a!=0m!=0\0==0
    {
        count++;
        i++;
    }
    printf("%d\n", count);

    return 0;
}