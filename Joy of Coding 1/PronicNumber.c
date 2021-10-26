/*Write a progam to check whether a number is a pronic number or not . Use Ternary operator
A number is said to be pronic number if it is a product of two consecutive numbers.
For examples:
6 = 2 x 3
72 = 8 x 9*/

#include<stdio.h>
#include<math.h>

int ispronic(int n){
        int flag=0,sum,i=1;
        while(i<=(sqrt(n)+1)){
                sum=i*(i+1);
                if(sum==n){
                        flag=1; break;
                }
                i++;
        }
        return flag;
}

int main(){
        int n;
        printf("Enter a number\n");
        scanf("%d",&n);
        ispronic(n) ? printf("Pronic number\n") : printf("Not a pronic number\n");
        return 0;
}
