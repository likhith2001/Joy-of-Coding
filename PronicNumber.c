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
