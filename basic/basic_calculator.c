#include <stdio.h>

int main() {
    menu:
    printf("CRUD\n1.INSERT\n2.READ\n3.UPDATE\n4.DELETE\n5.EXIT\nEnter your choice: \n");
    int ip;
    scanf("%d", &ip);
    char name[50],loc[50];
    int age;

    if (ip==1)
    {
        printf("Enter your name: \n");
        scanf("%s", name);
        printf("Enter your age: \n");
        scanf("%d", &age);
        printf("Enter your location: \n");
        scanf("%s", loc);
        printf("Data Inserted Successfully\n");
        goto menu;
    }
    else if(ip==2)
    {
        printf("Your details are: \n");
        printf("Name: %s\nAge: %d\nLocation: %s\n", name, age, loc);
        goto menu;
    }
    else if(ip==3)
    {
        char new_name[50];
        int new_age;
        char new_loc[50];
        printf("Enter your name: \n");
        scanf("%s", new_name);
        printf("Enter your age: \n");
        scanf("%d", &new_age);
        printf("Enter your location: \n");
        scanf("%s", new_loc);
        printf("Data Updated Successfully\n");
        strcpy(name, new_name);
        strcpy(loc, new_loc);
        age = new_age;
        goto menu;
    }
    else if(ip==4)
    {
        name[0]='\0';
        age=0;
        loc[0]='\0';
        printf("Data Deleted Successfully\n");
        goto menu;
    }
    else if(ip==5)
    {
        printf("Exiting the program...\n");
    }
    
    
    return 0;
}