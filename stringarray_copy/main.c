
#include <stdio.h>



int copyData(int source[], int destination[])
{
    int length, i;
    length = sizeof(source)/sizeof(source[0]);
    printf("\n%d\n", source[0]);
    for(i=0; i<length; i++)
    {
        destination[i] = source[i];
        
    }
}

int printData(int destination[])
{
    int i, size;
    size = sizeof(destination)/sizeof(destination[0]);
    for(i=0; i<size; i++)
    {
        printf("%d ", destination[i]);
        
    }
}

int main()
{
    int source[] = {1, 2, 3, 4, 5};
    int var1 = 0x1234;;
    char *ptr;
    *ptr = 0x1234;
    //printf("%d", sizeof(source));
    int destination[5];
    printData(source);
    copyData(source, destination);
    printData(destination);
    
    //char source[] = "Hello, World!";
    //char destination[50];
    
    return 0;
}
