#include <stdio.h>
#define MAX 20

void FirstAndLast(int arr[], int n, int key)
{
    int firstIndex = -1, lastIndex = -1, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            if (firstIndex == -1)
            {
                firstIndex = i;
                lastIndex= i;
            }
            else
            {
                lastIndex = i;
            }
        }
    }
    if (firstIndex != -1)
    {
        printf("First Occurrence of the key = %d\n",firstIndex);
        printf("Last Occurrence of the key = %d\n",lastIndex);
    }
    else
    {
        printf("Search Failure");
    }
}
int main()
{
    int arr[MAX], n, key, i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
        scanf("%d", &arr[i]);
    printf("Enter key to search\n");
    scanf("%d", &key);
    FirstAndLast(arr,n,key);
    return 0;
}
