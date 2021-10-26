#include<stdio.h>

int main(){
	int arr[10];
	int n,i,j,k,pos;
	printf("Enter the no. of elements of the array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				for(k=j;k<n-1;k++){
					arr[k]=arr[k+1];
				}
				n--;
			}
		}
	}
	printf("The array elements are\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
