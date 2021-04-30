/*
5. Program that splits an at the largest element
example if the input array is 22,44,133,11,66,99,88
then the output :
the largest is 133
elements before largest
22      44
 elements after largest
11      66      99      88
*/

#include<stdio.h>

#define N 10

int main()
{
    int a[N], arr1[N], arr2[N], i,pos=0, k1 = 0, k2 = 0;

    printf("Enter %d integer numbers\n", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);
  int max=a[0];
    for(i=0;i<N;i++)
    {

        if(a[i]>max)
        {
            pos=i;
            max=a[i];
        }
    }
    printf("Max = %d", max);

    for(i = 0; i < N; i++)
    {
        if(i < pos)
            arr1[k1++] = a[i];
        else
            arr2[k2++] = a[i];
    }

    printf("\nElements before MAX\n");
    for(i = 0; i < k1; i++)
        printf("%d\n", arr1[i]);

    printf("\nElements after MAX\n");
    for(i = 1; i < k2; i++)
        printf("%d\n", arr2[i]);

    printf("\n");

    return 0;
}
