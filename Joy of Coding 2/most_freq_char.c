#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	int len, freq[256]={0}, max = -1, result;
	printf("Enter the string:\n");
	scanf("%[^\n]",str);
	len = strlen(str);
	
	for(int i=0;i<len;i++){
		if(str[i]!=' ' && str[i]!='\n')
			freq[str[i]]++;
	}
	
	for(int i=0;i<len;i++){
		if(freq[str[i]]>max){
			max = freq[str[i]];
			result = str[i];
		}
	}
	printf("Most frequent alphabet is %c\n",result);
}
