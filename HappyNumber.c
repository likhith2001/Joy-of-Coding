#include<stdio.h>

int squares_sum(int n){
        int sum=0;
        while(n!=0){
                sum=sum+(n%10)*(n%10);
                n=n/10;
        }
        return sum;
}

int main(){
        int n,sum;
        printf("Enter a number\n");
        scanf("%d",&n);
        sum=squares_sum(n);
        while(sum!=1 && sum!=4)
                sum=squares_sum(sum);
        if(sum==1)
                printf("Happy Number\n");
        else
                printf("Not a happy number\n");
        return 0;
}
