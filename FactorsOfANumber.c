#include<stdio.h>

int main(){
        int  n;
        printf("Enter an integer\n");
        scanf("%d",&n);
        printf("The factors of the number are\n");

        for(int i=2;i<=n;i++)
                if((n%i)==0)
                        printf("%d\t",i);
        printf("\n");
        return 0;
}
