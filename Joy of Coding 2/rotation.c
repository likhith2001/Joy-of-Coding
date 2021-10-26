#include <stdio.h>
#include <string.h>
#define MAXN 100

int main(){
    char s[MAXN], t[MAXN];
    scanf("%s", s);
    scanf("%s", t);

    int n = strlen(s);
    int m = strlen(t);

    if(n == m){
        for(int i=0;i<n;i++){
            int j = 0, k = i;
            while(j < n){
                if(s[j] != t[k])
                    break;
                j++;
                k = (k+1)%m;
            }
            if(j == n){
                printf("Is a rotation, shifted by %d indices\n", i);
                return 0;
            }
        }
    }

    printf("Not a rotation\n");
    return 0;
}
