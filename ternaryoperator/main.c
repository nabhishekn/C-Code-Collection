
#include <stdio.h>

int main()
{
    int num1, num2, max;
    printf("Enter 2 numbers:\n");
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    max = (num1 > num2) ? num1 : num2;
    
    printf("The maximum number between %d and %d is: %d", num1, num2, max);
    

    return 0;
}