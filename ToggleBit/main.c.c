/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
Given a number in decimal represent it in binary and toggle the kth bit
*/

#include <stdio.h>

int main()
{
    int var = 23;
    //binary of 23 = 00010111
    int k = 3;
    
    var ^= (1 << k); 
    printf("%d", var);

    return 0;
}