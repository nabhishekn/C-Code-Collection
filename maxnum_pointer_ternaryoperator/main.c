//To find maximum number using pointers

#include <stdio.h>

int main()
{
    int *ptr1;
    int *ptr2;
    int num1 = 20;
    int num2 = 10;
    int max;
    
    ptr1 = &num1;
    ptr2 = &num2;
    
    max = (*ptr1 > *ptr2) ? *ptr1:*ptr2;
    
    printf("maximum number is:%d", max);

    return 0;
}