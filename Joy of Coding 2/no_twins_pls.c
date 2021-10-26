#include<stdio.h>

int main(){
	int n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++){
		for(int j=0;j<n && i!=j;j++){
			if(arr[i]==arr[j]){
				printf("Array not distinct\n");
				return 0;
			}
		}
	}
	printf("Array distinct\n");
	return 0;
}
