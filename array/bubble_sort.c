#include <stdio.h>
// Bubble Sort Algorithm in C
int main() {
    int arr[] = {80, 2, 5, 1212, 313, 566, 7};
    int n=7;
    // Traverse through all array elements
    for (int i=0; i<n; i++) 
    {
        // Last i elements are already in place
        for (int j=0; j<n-1; j++) 
        {
            // Swap arr[j] and arr[j+1]
            if (arr[j] > arr[j+1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int i;
    // Print the sorted array
    printf("Sorted array: ");
    for (i=0; i<n; i++) 
    {
        printf("%d ", arr[i]);
    }
    // Print the third largest element
    printf("\nThird largest element: %d", arr[n-3]);    
    
    // Print the array in descending order
    printf("\nDescending order: ");
    for (i = n-1; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}