#include<stdio.h>
#define MAX 64

int main(){
        int n, rem, a[MAX], i=0;
        printf("Enter the number\n");
        scanf("%d",&n);
        while(n!=0){
                rem=n%2;
                a[i++]=rem;
                n=n/2;
        }
        printf("The binary number is\n");
        for(i=i-1;i>=0;i--)
                printf("%d",a[i]);
        printf("\n");
        return 0;
}
