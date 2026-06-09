#include <stdio.h>

int main() 
{
    int arr[3][3] = {
        {101, 102, 103},
        {201, 202, 203},
        {301, 302, 303}
    };
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}