/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <limits.h>

int main()
{
    int array[5] = {3,5,2,-3,6};
    int i;
    int small;
    small = array[0];
    
    for(i=0; i<5; i++)
    {
        if(small > array[i])
        {
            small = array[i];
            
        }
    }
    printf("%d\n", small);
    
    int v_small = INT_MAX;
    
    for(i=0; i<5; i++)
    {
        if((small != array[i]) && (array[i] < v_small))
        {
            v_small = array[i];
        }
    }
    printf("%d\n", v_small);    
    printf("%d", INT_MAX);
    
    return 0;
}