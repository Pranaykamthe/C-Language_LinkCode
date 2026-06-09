#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40}; // Declare and initialize an array of integers

    // Print the elements of the array
    printf("Elements of the array: ");
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += arr[i]; // Add each element to the sum
        printf("%d ", arr[i]); // Print the current element
    }
    printf("\n");
    printf("Sum of the array elements: %d", sum); // Print the sum of the elements
    

    return 0;
}