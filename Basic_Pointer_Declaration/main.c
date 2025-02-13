/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int var = 10;
    int *ptr = &var;   //followed MISRA C:2012 rule 9.1
    int *ptr2 = NULL;  //
    
    printf("print ptr size:%zu\n", sizeof(ptr));
    
    int *ptr1 = (int *) malloc(5 * sizeof(int));
    if(ptr1 != NULL)
    {
        *ptr1 = 10;
        printf("size of ptr1:%zu\n", sizeof(ptr1));
    }
    else 
    {
        printf("ptr1 is null..");
    }
    free(ptr1);

    return 0;
}
