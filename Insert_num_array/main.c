
#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    
    int val;
    int pos;
    int size, i, j;
    
    size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Enter this value into array: \n");
    scanf("%d", &val);
    printf("Enter position: \n");
    scanf("%d", &pos);
    pos=pos-1;
    for(i=size; i>=pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    size++;
   
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}