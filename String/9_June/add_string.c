#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "hellohow";
    char str2[100] = "world";

    int len = strlen(str1);

    for(int i = 0; str2[i] != '\0'; i++)
    {
        str1[len + i] = str2[i];
    }

    str1[len + strlen(str2)] = '\0';

    printf("%s\n", str1);

    return 0;
}