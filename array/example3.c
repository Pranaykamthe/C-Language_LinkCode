#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 10, 20};
    // for(int i=0; i<6; i++) 
    // {
    //     for (int j=i+1; j<6; j++) 
    //     {
    //         if(arr[i] == arr[j]) 
    //         {
    //             printf("%d ", arr[i]);
    //             break;
    //         }
    //     }
    // }
    
    
    int n=6;
    for(int i=0; i<6; i++) 
    {
        for (int j=i+1; j<6; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                for (int k=j; k<n; k++) 
                {
                    arr[k] = arr[k+1];
                }
                n--; // Reduce the size of the array
                j--; // Adjust the index to check the new element at position j
            }
        }
    }
    for(int i=0; i<n; i++) 
    {
        printf("%d ", arr[i]);
    }


    return 0;
}