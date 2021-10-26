#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j, n, sum, tsum=0;
    int a[20];
    printf("Enter Array Limit:\n");
    scanf("%d",&n);
    printf("Enter Sum:\n");
    scanf("%d",&sum);
    printf("Enter Array Elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(sum==tsum){
                printf("Indices range from %d to %d",i,j-1);
                tsum=tsum+a[j];
                exit(0);
            }else{
                tsum=tsum+a[j];
            }
        }
        tsum=0;
    }
	return 0;
}
