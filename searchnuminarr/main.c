/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int searchinarr(int arr[], int size, int num)
{
    for(i=0; i<= i++)
    {
        if(num == i)
        {
            printf("%d is present", num);
        }
        else
        {
            printf("%d is not present", num);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int num;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d", size);
    printf("Enter Number: ");
    scanf("%d", &num);
    searchinarr(arr, size, num);
    
    return 0;
}