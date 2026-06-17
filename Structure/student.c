#include <stdio.h>

struct student {
    int rollno;
    char name[100];
    int age;
    float marks;
};

int main() {
    //struct name reference_variable;
    struct student s;

    // Assigning values to the structure members
    s.rollno = 101;
    strcpy(s.name, "ram");
    s.age = 23;
    s.marks = 90.89;
    printf("rollno %d\n name %s\n age %d\n marks %.2f\n"
        , s.rollno, s.name, s.age, s.marks);
    
    return 0;
}