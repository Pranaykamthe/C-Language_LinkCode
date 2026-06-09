#include <stdio.h>

int main()
{
    int marks[] = {22, 49, 7, 3, 2, 6};

    for (int i = 0; i < 6; i++)
    {
        if (marks[i] % 2 == 0)
        {
            marks[i] = 1;
        }
        else
        {
            marks[i] = 0;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", marks[i]);
    }


    return 0;
}