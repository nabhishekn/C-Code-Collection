/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int factorial(int num)
{
    if((num == 0) || (num == 1))
    {
        return 1;
    }
    else
    {
        return num * factorial(num-1);
    }
}

int main()
{
    int num=0;
    int (*ptr)(int) = factorial;
    
    printf("%d", ptr(num));

    return 0;
}