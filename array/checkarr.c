#include <stdio.h>

int main() {
    int arr[] = {32,51,40,7,6,8,6};
    printf("Elements key to search in array: \n");
    int key;
    scanf("%d", &key);
    int found = 0; // Flag to indicate if the key is found
    for(int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
        if(arr[i] == key) {
            found = 1;
            break; // Exit the loop if the key is found
        }
    }
    if(found==1) {
        printf("\nKey found in the array.\n");
    } else {
        printf("\nKey not found in the array.\n");
    }
    return 0;
}