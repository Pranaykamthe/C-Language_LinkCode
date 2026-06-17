#include<stdio.h>

//1with return type without parameter
int sq()
{
    return 10*10;
}

//2with return type with parameter
int function_1(int a, int b)
{
    int c=a+b;
    int cube=a*a*a;
    return cube;
}

int main()
{

    int op=sq();
    printf("%d",op);

    printf("%d\n",sq());
    int a=2, b=3;
    int result=function_1(a,b);
    printf("The cube of %d is %d",a,result);
    return 0;
}