#include<stdio.h>

int main(){
	int n, arr[n], temp[n], i, j, count;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		temp[i]=-1;
	}
	for(int i=0;i<n;i++){
		count = 1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
				temp[j]=0;
			}
		}
		if(temp[i]!=0){
			temp[i]=count;
		}
	}
	
	for(int i=0;i<n;i++){
		if(temp[i]!=0){
			printf("%d occurs %d times\n", arr[i], temp[i]);
		}
	}	
	return 0;
}
