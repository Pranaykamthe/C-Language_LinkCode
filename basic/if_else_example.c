#include <stdio.h>

int main() {
    // int age;
    // printf("Enter your age: ");
    // scanf("%d",&age);
    // if(age>=18){
    //     printf("Eligible");
    // }
    // else{
    //     printf("Not Eligible");
    // }
    
    int no1,no2;
    printf("Enter two no to check which no is greater:");
    scanf("%d%d",&no1,&no2);
    if(no1>no2){
        printf("%d is greater and %d is smaller",no1,no2);
    }
    else{
        printf("%d is smaller and %d is greater",no1,no2);
    }
    return 0;
}