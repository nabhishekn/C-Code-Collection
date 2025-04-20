/******************************************************************************
Define a structure Student with fields: name, roll_no, and marks.
Write a program using pointer to structure to input and display student details.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    int numberof_students, i;
    
    printf("Enter Number of Students in list: ");
    scanf("%d", &numberof_students);
    struct student *s[numberof_students];
    
    for(i=0; i<numberof_students; i++)
    {
        s[i] = (struct student *) malloc(sizeof(struct student));
        printf("Enter information of student %d: \n", i+1);
        printf("Enter student name: ");
        scanf(" %[^\n]", s[i]->name);
        printf("Enter student roll number: ");
        scanf("%d", &s[i]->roll_no);  
        printf("Enter student marks: ");
        scanf("%f", &s[i]->marks);
    }

    
    return 0;
}
