/******************************************************************************
Access union under structure, Also, confirm size of the structure
Employees Details :
Name Jobe_role Age ID Salary
*******************************************************************************/
#include <stdio.h>

struct Employee{
    char Name[50];
    char job_role[50];
    char age;
    union ID{
        char id;
        float sub_id;
    }_ID;
    unsigned long int salary;
};

int main()
{
    unsigned int employees_no = 0;
    int i;
    printf("How many employee details do you want to add in data: ");
    scanf("%d", &employees_no);
    struct Employee employee_data[employees_no];
    for(i=0; i<employees_no; i++)
    {
        printf("Enter Name of the %d emloyee: ", i+1);
        scanf(" %[^\n]", employee_data[i].Name);
        printf("Enter Job Role: ");
        scanf(" %[^\n]", employee_data[i].job_role);
        printf("Enter age: ");
        scanf("%hhd", &employee_data[i].age);
        printf("Enter ID: ");
        scanf("%hhd", &employee_data[i]._ID.id);
        // printf("Enter Sub ID: ");
        // scanf("%f", &employee_data[i]._ID.sub_id);
        printf("Enter Salary: ");
        scanf("%ld", &employee_data[i].salary);
 
        for(i=0; i<employees_no; i++)
        {
        printf("\n\nEmployee Name: %s\n", employee_data[i].Name);
        printf("Job role: %s\n", employee_data[i].job_role);
        printf("Age: %d\n", employee_data[i].age);
        printf("ID: %d\n", employee_data[i]._ID.id);
        // printf("Sub ID: %f\n", employee_data[i]._ID.sub_id);
        printf("Enter Salary: %ld\n", employee_data[i].salary);
            
        }

        
    } 
    return 0;
}
