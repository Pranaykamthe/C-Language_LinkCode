#include <stdio.h>

int main()
{
    int marks[] = {10,20,30,40,50,9,7};

    int ct = 0;

    for(int i = 0; i < 7; i++)
    {
        if(marks[i] % 2 == 0)
        {
            ct++;
        }
    }

    printf("%d\n", ct);

    return 0;
}