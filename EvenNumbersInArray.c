#include <stdio.h>

int main()
{
    // array declaration
    int arr[10], arr_size, i;
    printf("Enter the number of elements \n");
    scanf("%d", &arr_size);
    printf("Enter the array elements \n");
    for(i=0 ; i<arr_size ; i++)
    {
         scanf("%d", &arr[i]);
    }
    printf("The elements are \n");
    for(i=0; i<arr_size ; i++)
    {
         printf("%d ", arr[i]);
    }
    printf("\nThe even numbers in the array are\n");
    for(i=0 ; i<arr_size ; i++)
    {
         if((arr[i]%2)==0)
            printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}
