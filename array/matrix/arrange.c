#include <stdio.h>

int main() 
{
    int arr[3][3] = { {11, 12, 13}, 
                      {14, 15, 16}, 
                      {17, 18, 19} };
    
    // rearranging the elements of the array in descending order
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            for (int k = 0; k < 3; k++) 
            {
                for (int l = 0; l < 3; l++) 
                {
                    if (arr[i][j] > arr[k][l]) 
                    {
                        int temp = arr[i][j];
                        arr[i][j] = arr[k][l];
                        arr[k][l] = temp;
                    }
                }
            }            
        }
    }

    // printing the rearranged array
    printf("Rearranged array in descending order:\n");  
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