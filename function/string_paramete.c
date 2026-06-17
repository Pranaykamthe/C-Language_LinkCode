#include<stdio.h>

//without return type with argument
void welcome(char name[100])
{
    printf("hello %s ! Welcome to Linkcode!\n",name);
}

int main()
{
    //functionname()
    char name[100];
    printf("Enter your name: ");
    scanf("%s",name);
    welcome(name);
    return 0;
}