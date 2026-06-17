#include <stdio.h>

//1.without return type without arguments
void greet() {
    printf("Hello user!");
};

void add(int a, int b) {
    printf("%d", a + b);
};

void cube(int no) {
    printf("%d", no * no * no);
};

int mul(int c, int b) {
    return c * b;
};

int getno() {
    return 10;
};

int main() {
    // greet();
    
    // // performing addition of 2 numbers using function
    // add(5, 10);
    // printf("enter 2 nos to perform addition");
    // int a, b;
    // scanf("%d %d", &a, &b);
    // add(a, b);

    // // performing cube of a number using function
    // int no;
    // printf("enter no to find cube");
    // scanf("%d", &no);
    // cube(no);

    // // performing multiplication of 2 numbers using function
    //1-way
    int ans= mul(5, 10);
    printf("%d", ans);
    //2-way
    printf("%d", mul(5, 10));

    // performing return type without arguments
    //1-way
    int no = getno();
    printf("%d", no);
    //2-way
    printf("%d", getno());


    return 0;
}