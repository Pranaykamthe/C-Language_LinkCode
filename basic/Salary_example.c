#include <stdio.h>

int main() {

    char name[50];
    int empid;
    int basic_salary, hra, da, gross,tax,pf,net_salary;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your employee id: ");
    scanf("%d", &empid);

    printf("Enter your salary: ");
    scanf("%d", &basic_salary);

    hra = basic_salary * 0.20;
    da = basic_salary * 0.10;
    gross = basic_salary + hra + da;

    if(gross <= 25000) {
        tax=0;
    } 
    else if(gross > 25000 && gross <= 50000) {
        tax=gross * 0.10;
    }
    else{
        tax=gross * 0.20;
    }
    pf = basic_salary * 0.12;

    net_salary = gross - tax - pf;

    printf("\n------ Employee Salary Invoice Details ------\n");
    printf("Employee Name : %s\n", name);
    printf("Employee ID   : %d\n", empid);
    printf("Basic Salary  : %d\n", basic_salary);
    printf("HRA           : %d\n", hra);
    printf("DA            : %d\n", da);
    printf("Gross Salary  : %d\n", gross);
    printf("Tax           : %d\n", tax);
    printf("PF            : %d\n", pf);
    printf("Net Salary    : %d\n", net_salary);
    return 0;
}