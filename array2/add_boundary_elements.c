#include <stdio.h>

int main() {
    int a[4][4]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {1, 2, 4, 5},
        {7, 6, 5, 4}
    };
    int sum=0;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i==0 || i==3 || j==0 || j==3){
                sum+=a[i][j];
            }
        }
    }
    printf("Sum of boundary elements is %d\n", sum);
}