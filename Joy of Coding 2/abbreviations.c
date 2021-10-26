#include<stdio.h>

int main(){
	char str[100];
	printf("Enter the string:\n");
	scanf("%[^\n]",str);
	
	for(int i=0;str[i]!='\0';i++){
		if(str[i]<97 && (str[i-1]==' ' || i==0)){
			printf("%c",str[i]);
		}
	}
	printf("\n");
	return 0;
}
