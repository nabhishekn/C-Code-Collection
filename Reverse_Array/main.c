/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define MAX_SIZE 100

int rev_array(int arr[], int size);
int print_arr(int arr[], int size);

int main()
{
    int size, i, result;
    int arr[MAX_SIZE];
    
    printf("Insert an array size:\n");
    result = scanf("%d", &size);
    if(result != 1)
    {
        printf("Entered value is invalid\n");
        return -1;
    }
    if(size > MAX_SIZE)
    {
        printf("Entered size of an array is beyond maximum size\n");
        return -1;        
    }
    printf("Enter array:\n");
    for(i=0; i<size; i++)
    {
        result = scanf("%d", &arr[i]);
        if(result != 1)
        {
            printf("Entered value is invalid\n");
            return -1;
        } 
    }

    rev_array(arr, size);
    print_arr(arr, size);
    
    return 0;
}

int rev_array(int arr[], int size)
{
    int i, temp;
    
    for(i=0; i<size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    printf("Reverse array is:\n");
}

int print_arr(int arr[], int size)
{
    int i;
    
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}
