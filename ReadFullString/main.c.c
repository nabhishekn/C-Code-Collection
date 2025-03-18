/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Take a string from the user and print on the consol
#include <stdio.h>

int main()
{
    char str[100];
    
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    //scanf(" %[^\n]", str);
    
    printf("%s", str);

    return 0;
}



