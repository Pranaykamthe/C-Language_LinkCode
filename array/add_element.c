#include <stdio.h>

int main() {
    int ip=3;
    int arr[] = {20, 10, 3, 7, 77, 6, 3};
    for(int i=0; i<7; i++) 
    {
        if(arr[i] == ip) 
        {
            arr[i] =15;
        }
    }
    for(int i=0; i<7; i++) 
    {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}