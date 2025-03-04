
#include <stdio.h>
#include <stdint.h>

int main()
{
    float num1, num2;
    int a, b;
    uint8_t temp;
    printf("Enter Number 1 and Number 2:\n");
    temp = scanf("%e" "%e", &num1, &num2);
    if(temp != 2)
    {
        printf("Invalid input");
        return -1;
    }
    
    a = num1;
    b = num2;
    
    if((a != num1) || (b != num2)) 
    {
        printf("Will consider only integer values\n");
    }
    
        if(a > b){
        printf("Number 1 is greater than Number 2: %d", a);
    }else if(a < b){
        printf("Number 2 is greater than Number 1: %d", b);
    }else if(a == b){
        printf("Number 1 and Number 2 are equal");
    }
    return 0;
}