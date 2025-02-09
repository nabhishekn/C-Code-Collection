#include <stdio.h>

#define MAX_SIZE 100

int print_arr(int *arr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

int arr_swap(int *arr1, int *arr2, int size)
{
    int *start1 = arr1;
    int *start2 = arr2;
    int *end1 = arr1 + size - 1;
    int *end2 = arr2 + size - 1;
    int temp;
    int i;
    for(i=0; i<size; i++)  
    {
        temp = *start1;
        *start1 = *start2;
        *start2 = temp;
        
        start1 ++;
        start2 ++;
        
    }
    
    return 0;
}

int main()
{
    
    int arr1[MAX_SIZE] = {1,2,3,4,5,6};
    int arr2[MAX_SIZE] = {7, 8, 9, 10, 11, 12};
    int size;
    printf("Enter size of ana array:\n");
    scanf("%d", &size);
    print_arr(arr1, size);
    printf("\n");
    print_arr(arr2, size);
    printf("\nAfter Swap:\n");
    arr_swap(arr1, arr2, size);
    print_arr(arr1, size);
    printf("\n");
    print_arr(arr2, size);
    
    return 0;
}