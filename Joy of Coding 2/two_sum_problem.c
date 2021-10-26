#include<stdio.h>

int main(){
	int arr[10];
	int n,i,j,pos, sum;
	printf("Enter the no. of elements of the array\n");
	scanf("%d",&n);
	printf("Enter the sum\n");
	scanf("%d",&sum);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]+arr[j]==sum){
				printf("Elements at indices %d and %d give us the required sum\n", i, j);
			}
		}
	}
}
