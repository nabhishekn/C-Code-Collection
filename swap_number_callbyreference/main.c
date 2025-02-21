/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


int swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
#include <stdio.h>

int main()
{
    int n1, n2;
    
    printf("Enter 2 numbers:");
    scanf("%d %d", &n1, &n2);
    
    swap(&n1, &n2);
    
    printf("After swap:%d, %d", n1, n2);
    

    return 0;
}
