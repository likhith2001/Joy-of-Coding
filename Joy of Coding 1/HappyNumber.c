/*C program to check if the given number is Happy Number or not !!
A number is said to be happy if it yields 1 when replaced by the sum of squares of its digits repeatedly. 
If this process results in an endless cycle of numbers containing 4, then the number will be an unhappy number.
Example 
Number = 32
32+ 22 = 13
12 + 32 = 10
12 + 02 = 1   Happy Number 

82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1
82 is a happy number number

Some of the other examples of happy numbers are 7, 28, 100, 320 and so on.

The unhappy number will result in a cycle of 4, 16, 37, 58, 89, 145, 42, 20, 4, ..*/

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
