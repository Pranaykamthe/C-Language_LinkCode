#include <stdio.h>

struct student {
    int rollno;
    char name[100];
    int age;
    float marks;
};

int main() {

    struct student s[5];

    // Assigning values to the structure members
    int ip;
    printf("how many students you want to enter: ");
    scanf("%d", &ip);

    for(int i = 0; i < ip; i++) {
        printf("enter details of student %d\n", i+1);
        printf("enter rollno: ");
        scanf("%d", &s[i].rollno);
        printf("enter name: ");
        scanf("%s", s[i].name);
        printf("enter age: ");
        scanf("%d", &s[i].age);
        printf("enter marks: ");
        scanf("%f", &s[i].marks);
        printf("student %d added !\n", i+1);
        printf("\n");
    }

    for(int i = 0; i < ip; i++) {
        printf("rollno %d\nname %s\nage %d\nmarks %.2f\n"
            , s[i].rollno, s[i].name, s[i].age, s[i].marks);
        printf("\n");
    }
    
    return 0;
}