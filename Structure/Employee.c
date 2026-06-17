#include <stdio.h>
#include <string.h>
int count=0;
struct Employee {
	int empid;
	char name[50];
	char designation[50];
    float salary;
};
struct Employee e[100];


// ?function ==>add
void add_employee() 
{
    printf("How many employees do you want to add? \n");
    int ip;
    scanf("%d", &ip);
    for (int i = 0; i < ip; i++) {
        printf("Enter Employee ID: \n");
        scanf("%d", &e[count].empid);
        printf("Enter Employee Name: \n");
        scanf("%s", e[count].name);
        printf("Enter Employee Designation: \n");
        scanf("%s", e[count].designation);
        printf("Enter Employee Salary: \n");
        scanf("%f", &e[count].salary);
        count++;
        printf("Employee %d added successfully!\n", count);
        return;
        }
}

void view_emp() 
{
    if (count == 0) {
        printf("employee records not found !\n");
        return;
    }
    printf("Employee Details:\n");
    for (int i = 0; i < count; i++) {
        printf("Employee ID: %d\n", e[i].empid);
        printf("Employee Name: %s\n", e[i].name);
        printf("Employee Designation: %s\n", e[i].designation);
        printf("Employee Salary: %.2f\n", e[i].salary);
        printf("-------------------------\n");
    }
}

void update_emp() 
{
    int id;
    printf("Enter which employee you want to update (Employee ID): \n");
    scanf("%d", &id);
    printf("Which field you want to update ?\n1.Name\n2.Designation\n3.Salary\nEnter your choice: \n");
    int ip;
    scanf("%d", &ip);
    for (int i = 0; i < count; i++) {
        if (e[i].empid == id) {
            switch (ip) {
                case 1:
                    printf("Enter new name: \n");
                    scanf("%s", e[i].name);
                    printf("Employee name updated successfully!\n");
                    break;
                case 2:
                    printf("Enter new designation: \n");
                    scanf("%s", e[i].designation);
                    printf("Employee designation updated successfully!\n");
                    break;
                case 3:
                    printf("Enter new salary: \n");
                    scanf("%f", &e[i].salary);
                    printf("Employee salary updated successfully!\n");
                    break;
                default:
                    printf("Invalid choice. Please try again.\n");
            }
            return;
        }
    }
}


int main() {
    int ip;
    do
    {
        printf("Welcome to Employee Management System\n1.Add Employee\n2.View Employee\n3.Update Employee\n4.\nEnter your choice: \n");
        scanf("%d", &ip);
        switch (ip) {
            case 1:
                add_employee();
                break;
            case 2:
                view_emp();
                break;
            case 3:
                update_emp();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (ip!=3);
    
    return 0;
}