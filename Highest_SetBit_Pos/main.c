/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define INT_SIZE sizeof(int) * 8

int main()
{
    int Num = 0;
    int pos = -1;
    
    char i;
    for(i=0; i<INT_SIZE; i++)
    {
        if((Num >> i) & 1)
            pos = i;
    }
    if (pos != -1)
    {
        printf("Set bit position %d", pos);
    }
    else
    {
        printf("0 has no set bit");
    }
 

    return 0;
}