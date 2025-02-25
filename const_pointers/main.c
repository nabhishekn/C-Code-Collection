
#include <stdio.h>

int main()
{
    int *const ptr1;            //const pointer //constant address
    const int *ptr2;            //pointer to const //constant value
    //int *ptr;
    int num = 100;              
    ptr1 = &num;
    *ptr2 = 20;
    printf("%d", *ptr1);

    return 0;
}

/****************************Output of the code**********************************************/
main.c: In function ‘main’:
main.c:10:10: error: assignment of read-only variable ‘ptr1’
   10 |     ptr1 = &num;
      |          ^
main.c:11:11: error: assignment of read-only location ‘*ptr2’
   11 |     *ptr2 = 20;
      |           ^