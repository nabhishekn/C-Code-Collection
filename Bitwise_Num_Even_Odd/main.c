/******************************************************************************

To check wether number is even or odd using Bitwise

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num = 6;
    
    if(num & 1)
    {
        printf("number is odd");
    }
    else 
    {
        printf("number is even");
    }
    return 0;
}
