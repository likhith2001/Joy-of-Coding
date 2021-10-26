#include<stdio.h>

int main(){
//	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	
	int n, a[20][20];
	printf("Enter the order of matrix\n");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	
	printf("Original matrix:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
			
	printf("Rotated matrix:\n");
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=n-1;j++){
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
