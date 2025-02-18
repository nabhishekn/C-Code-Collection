/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, size;
    printf("Enter Size of the array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    
    for(i=0; i<=size-1; i++)
    {
        printf("Enter %d value\n", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(i=1; i<size; ++i){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("Largest Number is:%d", arr[0]);
    

    return 0;
}
