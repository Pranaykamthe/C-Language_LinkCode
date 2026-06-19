// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int count=0;
struct Employee {
    int empid;
    char name[50];
    float salary;
    
};
struct Employee e[100]  ;

// ?function ===>add
void add_employee()
{
    printf("how many employees do u want add?\n");
    int ip;
    scanf("%d",&ip);
    for(int i=0; i<ip; i++)
    {
    printf("enter employee id \n");
    scanf("%d",&e[count].empid);
    printf("enter emp name\n");
    scanf("%s",e[count].name);
    printf("enter salary\n");
    scanf("%f",&e[count].salary);
    printf("employee %d added !\n",count+1);
    count++;
    }
    
}

void view_emp()
{
  
    if (count==0)
    {
        printf("employee records not found!");
    }
    for(int i=0; i<count;i++)
    {
        printf("%d %s %2.f\n",e[i].empid,e[i].name,e[i].salary);
    }
}

void update_emp()
{
    int id;
    printf("enter empid to update details \n");
    scanf("%d",&id);
    for(int i=0; i<count; i++)
    {
        if(id==e[i].empid)
        {
          printf("1.update name\n2.update salary\n3.both \n 4.exit\n enter choice\n");
          int choice;
          scanf("%d",&choice);
          if (choice==1)
          {
              printf("enter new name\n ");
              char newname[30];
              scanf("%s",newname);
              strcpy(e[i].name,newname);
              printf("name updated !");
              printf("%d %s %2.f\n",e[i].empid,e[i].name,e[i].salary);
          }
        }
        else
        {
             printf("no record found !");
        }
        
    }
}
void delete_emp()
{
    int id;
    printf("enter empid to delete details \n");
    scanf("%d",&id);
    for(int i=0; i<count; i++)
    {
        if(id==e[i].empid)
        {
          for(int j=i; j<count-1; j++)
          {
              e[j]=e[j+1];
          }
          count--;
          printf("employee record deleted !");
        }
        else
        {
             printf("no record found !");
        }
        
    }
}
void exit()
{
    printf("exiting the program !");
}

int main() {
    int ip;
    do{
        printf("\nwelcome to EMS\n1.Add\n2.View\n3.update \n4.delete\n5.exit!\nEnter yr choice:\n");
        scanf("%d",&ip);
        switch(ip)
        {
            case 1: {
                add_employee();
                break;
            }
            case 2:
            {
                view_emp();
                break;
            }
            case 3:{
                update_emp();
                break;
            }
            case 4:{
                delete_emp();
                break;
            }
            case 5:{
                exit();
                break;
            }
            default:{
                printf("invalid ip !");
            }
        }
    }
    while(ip!=5);

    return 0;
}