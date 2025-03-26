/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void copyDest(void *arr1, void *arr2, int size, int typesize)
{
    int i;
    char *charsrc, *chardest;
    int *intsrc, *intdest;
    
    if(typesize == sizeof(char))
    {
        charsrc = (char *)arr1;
        chardest = (char *)arr2;
        
        for(i=0; i<size; i++)
        {
            chardest[i] = charsrc[i];
        }
    
        for(i=0; i<size; i++)
        {
            printf("%c ", chardest[i]);
        }
    }
    if(typesize == sizeof(int))
    {
        intsrc = (int *)arr1;
        intdest = (int *)arr2;
        
        for(i=0; i<size; i++)
        {
            intdest[i] = intsrc[i];
        }
    
        for(i=0; i<size; i++)
        {
            printf("%d ", intdest[i]);
        }
    }
}


int main()
{
    int array1[4] = {1, 2, 3, 4};
    char array2[3]= {'A', 'B', 'C'};
    int array3[4];
    char array4[3];
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
 
    
    copyDest(&array2, &array4, size2, sizeof(char));
    printf("\n");
    copyDest(&array1, &array3, size1, sizeof(int));

    return 0;
}