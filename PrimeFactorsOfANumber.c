#include<stdio.h>

int isprime(int n){
        int flag=1;
        for(int i=2;i<=n/2;i++){
                if((n%i)==0){
                        flag=0; return flag;
                }
        }
        return flag;
}

int main(){
        int n, prime;
        printf("Enter an integer\n");
        scanf("%d",&n);
        printf("The prime factors of the integer are\n");
        for(int i=2;i<=n;i++)
                if((n%i)==0){
                        prime=isprime(i);
                        if(prime==1)
                                printf("%d\t",i);
                }
        printf("\n");
        return 0;
}
