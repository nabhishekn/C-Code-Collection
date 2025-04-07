#include <stdio.h>
#include <string.h>
// // int revstr(char str [])
// // {
// //     int i;
// //     char temp;
// //     //int length = strlen(str) - 1;
// //     //int length = sizeof(str) / sizeof(str[0]);
// //     // printf("Length - %d", sizeof(str));
// //     for(i=0; i<length/2; i++)
// //     {
// //         temp = str[i];
// //         str[i] = str[length - i];
// //         str[length - i] = temp;
// //     }
// //     printf("%s", str);
// // }
// int length(char *str[])
// {
//     int size = sizeof(str);
//     printf("%d", size);
// }
// int main()
// {
//     char str[] = "HWorld";
//   // revstr (str);
//   char *ptr = str;
//     length(ptr);
    

//     return 0;
// }

int revstr(char str[])
{
    int i=0;
    int length;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char str[] = "Abhishek";
    int len = revstr(str);
    printf("%d", len);
    
}