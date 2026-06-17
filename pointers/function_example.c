#include <stdio.h>

void add_element(int *ptr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",*(ptr+i));
        sum += ptr[i];
    }
    printf("Sum: %d\n", sum);
}
//int *ptr=arr;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    add_element(arr, 5);
    return 0;
}
