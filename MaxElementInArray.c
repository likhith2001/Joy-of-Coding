#include <stdio.h>
//function prototypes
void read_arr(    );
void print_arr(    );
int ret_max(    );

int main()
{
    // array declaration
    int arr[10], arr_size;
    printf("Enter the number of elements \n");
    scanf("%d", &arr_size);
    printf("Enter the elements\n");
    read_arr(arr, arr_size);
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    printf("\nThe  maximum element in the array is %d\n", ret_max(arr, arr_size));
    return 0;
}

void read_arr(int *arr, int n){
        for(int i=0 ; i<n ; i++)
                scanf("%d", &arr[i]);
}

void print_arr(int *arr, int n){
        for(int i=0 ; i<n ; i++)
                printf("%d ", arr[i]);
        printf("\n");
}

int ret_max(int *arr, int n)
{
    int max=arr[0];
    for(int i=1 ; i<n ; i++)
                if(max<arr[i])
                        max=arr[i];
    return max;
}
