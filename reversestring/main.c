#include <stdio.h>
#include <string.h>

char arr[] = "Akshata";
char arr1[];

int strleng(char arr[])
{
    int len;
    int i;
    for(i=0; arr[i]!='\0'; i++)
    {
        len++;
    }
    return len;
}
void strv(char arr[])
{
    char temp;
    int i;
    int len = strleng(arr);
    for(i=0; i<len; i++)
    {
        temp = arr[len-i-1];
        arr1[i] = temp;
    }
}

int main()
{
    printf("String: %s\n", arr);
    printf("Length of the string: %d\n", strleng(arr));
    strv(arr);
    printf("Reverse string: %s", arr1);
    return 0;
}